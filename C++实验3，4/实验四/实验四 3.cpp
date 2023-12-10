#include<iostream>

using namespace std;

int main() {
	int arr[100];
	for (int i = 0; i < 100; i++)
	{
		arr[i] = 0;
	}
	for (int i = 1; i < 101; i++)
	{
		for (int j = i; j < 101; j +=i)
		{
			if (arr[j - 1] == 0)
			{
				arr[j - 1] = 1;
			}
			else
			{
				arr[j - 1] = 0;
			}
		}
	}
	for (int i = 0; i < 100; i++)
	{
		if (arr[i] == 1) {
			cout << "L" << i+1<<"  ";
		}
	}
	return 0;
}