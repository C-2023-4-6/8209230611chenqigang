#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main() {
	//����
	double a;
	double x1;
	double xn;

	//����
	cout << "������a" << endl;
	cin >> a;
	//�����һ��
	x1 = a;
	xn = (x1 + a / x1) / 2;
	//�ж�����
	if (a<0)
	{
		cout << "����û��ƽ����" << endl;
	}
	else
	{
		//ѭ������
		do
		{
			x1 = xn;
			xn = (x1 + a / x1) / 2;
		} while (abs(xn-x1)>=0.00001);
	//���
	cout << a << "��ƽ������" <<fixed<<setprecision(5)<<xn<< endl;

	}
	system("pause");
	return 0;
	//aΪ��������ʱ���Ϊ0
	//�Ѿ�����޸ģ�ʹ��if���
	//���ܸ�С����Ϊ�������������ޣ����㾫�ȹ��߻ᵼ������������޷�������

}