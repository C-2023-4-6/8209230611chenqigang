#include <iostream>

using namespace std;
class Point{
public:
    Point(){
        x=60;
        y=80;
    }
    void setPoint(int i,int j){
        x=i+60;
        y=j+80;
    }
    void display(){
        cout<<"("<<x<<","<<y<<")"<<endl;
    }
private:
    int x;
    int y;
};
int main() {
    Point p1;
    p1.display();
    int i,j;
    cin>>i>>j;
    p1.setPoint(i,j);
    p1.display();
    return 0;
}
