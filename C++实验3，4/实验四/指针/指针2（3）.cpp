#include<iostream>
using namespace std;
void bubbleSort(int* list,int n) {
	for (int i = 0; i < n-1; i++)
	{
		for (int j = 0; j < n-1-i; j++)
		{
			if (list[j]>list[j+1])
			{
				swap(list[j], list[j+1]);
			}
		}

	}


}
int main() {
	int n;
	cin >> n;
	int* list = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> list[i];
	}
	bubbleSort(list,n);
	for (int i = 0; i < n; i++)
	{
		cout << *list + i << " ";
	}
	delete list;


	return 0;
}