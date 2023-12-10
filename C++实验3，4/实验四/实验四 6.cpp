#include<iostream>

using namespace std;

char letter = 'a';
void count(const char s[], int counts[]) {
	int l1 = strlen(s);
	for (int i = 0; i < 26; i++)
	{
		for (int j = 0; j < l1; j++)
		{
			if (s[j] == letter)
			{
				counts[i]++;
			}
		}	
		letter++;
	}
}
int main() {
	cout << "Enter a string:";
	char s[10000];
	int counts[26];
	for (int i = 0; i < 26; i++)
	{
		counts[i] = 0;
	}
	cin.getline(s,10000);

	int l = strlen(s);
	for (int i = 0; i < l; i++)
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
		{
			s[i] += 32;
		}
	}
	count(s, counts);
	for (int i = 0; i < 26; i++)
	{
		if (counts[i] != 0) {
			cout << char(i + 'a') <<": " << counts[i] << " times" << endl;
		}
	}
	return 0;
}