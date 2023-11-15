#include<iostream>
using namespace std;
int main() {
	//定义
	int a;
	int b;
	int c;
	int cir;

	//输入
	cout << "请输入三条边" << endl;
	cin >> a;
	cin >> b;
	cin >> c;

	//计算
	if (a+b>c && b+c>a)
	{
		cir = a + b + c;
		cout << "周长=" << cir << endl;
		if (a==b || b==c || a==c)
		{
			cout << "这是一个等腰三角形" << endl;
		}
		else
		{
			cout << "这不是一个等腰三角形" << endl;
		}
	}
	else
	{
		cout << "这不是一个三角形" << endl;
	}
	system("pause");
	return 0;
}