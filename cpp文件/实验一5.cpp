#include<iostream>
#include <iomanip>

using namespace std;

int main(){
	float f;
	float c;
	cout << "请输入华氏度" << endl;
	cin >> f;
	
	c = (f - 32) / .8;
	cout << f << "华氏度等于"<< fixed << setprecision(2) << c<<"摄氏度"<< endl;
}