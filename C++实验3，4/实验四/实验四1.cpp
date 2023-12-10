#include<iostream>

using namespace std;

int main() {
	cout << "Enter ten numbers:";
	int arr[10];
	int arr1[10];
	int b = 0;
	for (int i = 0; i < 10; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < 10; i++)
	{
		int a = 1;
		for (int j = 0; j < i; j++)
		{
			if (arr[i] == arr[j]) {
				a = 0;
			}
		}
		if (a)
		{
			arr1[b] = arr[i];
			b++;
		}
	}
	cout << "The distinct numbers are£º";
	for (int i = 0; i < b; i++)
	{
		cout << arr1[i]<<" ";
	}

	return 0;
}