#include<iostream>
using namespace std;

int main() {
	int a;
	int b;

	cout << "请输入两个数" << endl;
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
	cout << "最大公约数是：" << b << endl;

	//最小公倍数
	c /= b;
	cout << "最大公倍数是：" << c << endl;

	system("pause");
	return 0;
}