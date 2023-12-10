#include<iostream>

using namespace std;

int divisor(int a, int b) {
	int c = 1;
	int d;
	
	while (c!=0)
	{
		int max = 0;
		int min = 0;
		if (a > b)
		{
			max = a;
			min = b;
		}
		else if (a < b)
		{
			max = b;
			min = a;
		}
		else if (a == b)
		{
			return a;
		}
		c = max % min;
		a = min;
		b = c;
		d = min;
	}

	return d;
}

int multiple(int& a, int& b,int& c) {
	int d;
	d = a * b / c;

	return d;

}

int main() {
	int a;
	int b;
	cin >> a>>b;
	int c = divisor(a,b);
	int d = multiple(a,b,c);
	cout <<"最大公约数是" << c << endl;
	cout <<"最大公倍数是" << d << endl;

	return 0;
}