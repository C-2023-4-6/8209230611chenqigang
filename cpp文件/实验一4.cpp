#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	unsigned int testUnint = 65534;//oxfffe
	cout << "output in unsigned int 1 type:" << testUnint<< endl;//<<oct;
	cout << "output in char type:" << static_cast<char>(testUnint) << endl;
	cout << "output in short type:" << static_cast<short>(testUnint) << endl;//Ϊʲô���Ϊ-2?:��Ϊ�������short�ķ�Χ��
	cout << "output in int type:" << static_cast<int> (testUnint) << endl;
	cout << "output in double type:" << static_cast<double>(testUnint) << endl;
	cout << "output in double type:" << setprecision(4) << static_cast<double>(testUnint) << endl;
	cout << "output in Hex unsigned int type:" << hex << testUnint << endl; //16�������
	cout << "output in Oct unsigned int type:" << oct << testUnint << endl; //8�������
	float b = 2.123;
	cout << "output in unsigned int type:" <<dec<< static_cast<int> (b) << endl;
	
	system("pause");
	return 0;
}