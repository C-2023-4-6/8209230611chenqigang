#include<iostream>

using namespace std;

bool is_prime(int num) {
	for (int i = 2; i < num; i++)
	{
		int a;
		a = num % i;
		if (a==0)
		{
			return false;
		}
	}
	return true;
}

int main() {
	int a = 0;
	int b = 0;
	for (int i = 2;; i++)
	{
		if (is_prime(i))
		{
			cout << i << " ";
			a++;
			b++;

		}
		if (b==10)
		{
			cout << endl;
			b = 0;
		}
		if (a>199)
		{
			break;
		}
	}

	return 0;
}