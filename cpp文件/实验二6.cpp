#include<iostream>
using namespace std;

int main() {
	int a;
	int b;

	cout << "������������" << endl;
	cin >> a;
	cin >> b;
	int c =a*b;
	while (a!=0 && a!=b)
	{
		if (b > a) {
			int temp = a;
			a = b;
			b = temp;
		}
		else if (a > b) {
			a = a % b;
		}
		else
		{
			
		}
	}
	cout << "���Լ���ǣ�" << b << endl;

	//��С������
	c /= b;
	cout << "��󹫱����ǣ�" << c << endl;

	system("pause");
	return 0;
}