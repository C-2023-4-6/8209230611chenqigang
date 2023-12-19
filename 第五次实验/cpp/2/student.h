class Student{
public:
    Student(){};
    Student(int n,char nm[20],char s ){
        num=n;
        for (int i = 0; i < 20; ++i) {
            name[i]=nm[i];
        }
        sex = s;
    }
    void set_value(int n,char nm[20],char s ){
        num=n;
        for (int i = 0; i < 20; ++i) {
            name[i]=nm[i];
        }
        sex = s;
    }
    void display();

private:
    int num;
    char name[20];
    char sex;
};
