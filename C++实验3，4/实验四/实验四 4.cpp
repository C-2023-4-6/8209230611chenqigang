#include<iostream>

using namespace std;

void merge(const int list1[], int size1, const int list2[], int size2, int list3[]) {
	int i = 0, j = 0, k = 0;
	int min = size1 >= size2 ? size2: size1;

	for (; i < size1 + size2;i++)
	{
		if (i<min)
		{
			if (list1[j] > list2[k])
			{
				list3[i] = list2[k];
			
				k++;
			}
			else if ( list1[j] < list2[k])
			{
				list3[i] = list1[j];
			
				j++;
			}
			else if(list1[j]==list2[k])
			{
				list3[i] = list1[j];
				list3[i + 1] = list1[j];
				i++;
				j++;
			}
		}

		else
		{
			if (size1>size2)
			{
				list3[i] = list1[j];
				j++;
			}
			else
			{
				list3[i] = list2[k];
				k++;
			}
		}
	}
}

int main() {
	int size1,size2;
	int arr[100];
	int arr1[100];
	int arr2[200];
	cout << "Enter list1:";
	cin >> size1;
	for (int i = 0; i < size1; i++)
	{
		cin >> arr[i];
	}
	cout << "Enter list2:";
	cin >> size2;
	for (int i = 0; i < size2; i++)
	{
		cin >> arr1[i];
	}

	merge(arr, size1, arr1, size2, arr2);

	cout << "The merged list is ";

	for (int i = 0; i < size1+size2-1; i++)
	{
		cout << arr2[i] << " ";
	}
	return 0;
}