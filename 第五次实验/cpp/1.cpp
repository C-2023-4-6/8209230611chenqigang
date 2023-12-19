#include<iostream>
using namespace std;
class Time
{
public:
    void setHour(int s_h){
        hour=s_h;
    }
    void setMinute(int s_m){
        minute=s_m;
    }
    void setSec(int s_s){
        sec=s_s;
    }
    void display(){
        cout<<hour<<":"<<minute<<":"<<sec<<endl;
    }

private:
    int hour;
    int minute;
    int sec ;
};
int main()
{

    int h,m,s;
    Time t1;

    cin>>h>>m>>s;
    t1.setHour(h);
    t1.setMinute(m);
    t1.setSec(s);
    t1.display();
    return 0;
}

