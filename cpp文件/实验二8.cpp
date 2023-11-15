#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main() {
	//定义
	double a;
	double x1;
	double xn;

	//输入
	cout << "请输入a" << endl;
	cin >> a;
	//计算第一次
	x1 = a;
	xn = (x1 + a / x1) / 2;
	//判断正负
	if (a<0)
	{
		cout << "负数没有平方根" << endl;
	}
	else
	{
		//循环计算
		do
		{
			x1 = xn;
			xn = (x1 + a / x1) / 2;
		} while (abs(xn-x1)>=0.00001);
	//输出
	cout << a << "的平方根是" <<fixed<<setprecision(5)<<xn<< endl;

	}
	system("pause");
	return 0;
	//a为负数运行时结果为0
	//已经完成修改，使用if语句
	//不能更小，因为浮点数精度有限，计算精度过高会导致误差变大，甚至无法收敛。

}