#include <iostream>

using namespace std;

class Cuboid{
public:
    void setlwh(int l,int w,int h){
        length=l;
        width=w;
        height=h;
    }

    int calculate_volume(){
        int v=length*width*height;
        return v;
    }

private:
    int length;
    int width;
    int height;
};

int main() {
    Cuboid cub[3];
    for (int i = 0; i < 3; ++i) {
        int l;
        int w;
        int h;
        cin>>l>>w>>h;
        cub[i].setlwh(l,w,h);
    }
    for (int i = 0; i < 3; ++i) {
        cout<<"长方体"<<i+1<<"的体积是"<<cub[i].calculate_volume()<<endl;
    }
    return 0;
}
