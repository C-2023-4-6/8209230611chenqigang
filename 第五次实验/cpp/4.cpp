#include <iostream>

using namespace std;

class Student{
public:

    void set(int s,int n){
        score=s;
        num=n;
    }

    int getNum(){
        return num;
    }

    int getScore(){
        return num;
    }
private:
    int score;
    int num;
};

int max(Student *stu){
    int flag = stu[0].getNum();
    int max1 = stu[0].getScore();
    for (int i = 0; i < 5; ++i) {
        for (int j = 1; j <5 ; ++j) {
            if (stu[i].getScore()>max1){
                max1 = stu[i].getScore();
                flag = stu[i].getNum();
            }
        }
    }
    return flag;
}

int main() {
    Student *stu = new Student[5];
    for (int i = 0; i < 5; ++i) {
        int s,n;
        cin>>n>>s;
        stu[i].set(s,n);
    }
    cout<<max(stu);
    delete []stu;
    return 0;
}
