#include<iostream>

using namespace std;

void bubble_sort(double* arr, int length)
{
    bool changed = true;
    do
    {
        changed = false;
        for (int j = 0; j < length - 1; j++)	
            {
                if (arr[j] > arr[j + 1])		
                {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                    changed = true;
                }
            }
    } while (changed);

}
int main() {
    double arr[10];
	double *p =arr;
	for (int i = 0; i < 10; i++)
	{
		cin >> arr[i];
	}
    bubble_sort(p, 10);
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
	return 0;
}