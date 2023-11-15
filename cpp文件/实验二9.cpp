#include<iostream>
using namespace std;

int main() {
	double cost = 0;
	int num = 2;
	int sum=2;
	int day = 1;
	int temp = 0;
	while (temp<100)
	{
		num *= 2;
		sum += num;
		temp = sum + num * 2;
		//cout << num << endl;
		//cout <<"sum=" << sum << endl;
		day++;
	}
	
	
	cost = 0.8 * sum/day;

	cout << "平均每天花费" << cost << "元" << endl;

	system("pause");
	return 0;
}