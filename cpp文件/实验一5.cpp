#include<iostream>
#include <iomanip>

using namespace std;

int main(){
	float f;
	float c;
	cout << "�����뻪�϶�" << endl;
	cin >> f;
	
	c = (f - 32) / .8;
	cout << f << "���϶ȵ���"<< fixed << setprecision(2) << c<<"���϶�"<< endl;
}