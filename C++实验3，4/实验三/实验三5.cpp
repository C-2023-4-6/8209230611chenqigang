#include<iostream>

using namespace std;

int peach(int day,int x) {
	 
	 if (day == 10)
	 {
		 return x;
	 }
	 day ++;
	 x = (x+1)*2;

	 return peach(day,x);
}

int main() {
	int day = 1;
	int x = 1;
	cout<<"��һ�����ժ��" << peach(day, x)<<"������";

	return 0;
}