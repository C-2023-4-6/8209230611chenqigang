#include<iostream>
using namespace std;

int main() {
	char str;
	cout << "ÇëÊäÈë×Ö·û" << endl;
	cin >> str;

	//cout << int(str) << endl;
	if (str>=97)
	{
		cout<<char(str-32)<<endl;

	}

	else
	{
		cout << int(str) << endl;
	}

	system("pause");
	return 0;
}