#include<iostream>
using namespace std;
int main() {
	//����
	int a;
	int b;
	int c;
	int cir;

	//����
	cout << "������������" << endl;
	cin >> a;
	cin >> b;
	cin >> c;

	//����
	if (a+b>c && b+c>a)
	{
		cir = a + b + c;
		cout << "�ܳ�=" << cir << endl;
		if (a==b || b==c || a==c)
		{
			cout << "����һ������������" << endl;
		}
		else
		{
			cout << "�ⲻ��һ������������" << endl;
		}
	}
	else
	{
		cout << "�ⲻ��һ��������" << endl;
	}
	system("pause");
	return 0;
}