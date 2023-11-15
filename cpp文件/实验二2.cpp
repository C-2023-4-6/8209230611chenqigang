#include<iostream>
using namespace std;
int main(){	
		float x;
		float y;
		cout << "ÇëÊäÈëx" << endl;
		cin >> x;
		if (x > 0 && x < 1)
		{
			y = 3 - 2 * x;
			cout << "y=" << y << endl;
			
		}
		else if(x >= 1 && x < 5)
		{
			y = 2.0 / 4.0 / x + 1.0;
			cout << "y=" << y << endl;
		}
		else if(x >= 5 && x < 10)
		{
			y = x * x;
			cout << "y=" << y << endl;
		}
		system("pause");
		return 0;	
}