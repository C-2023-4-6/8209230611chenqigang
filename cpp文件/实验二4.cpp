#include <iostream>
using namespace std;

int main() {
    char option;
    float num1, num2;

    cout << "������һ�����֣�" << endl;
    cin >> num1;

    cout << "�������������+��-��*��/��%��" << endl;
    cin >> option;

    cout << "��������һ�����֣�" << endl;
    cin >>num2;

    switch (option) {
    case '+':
        cout << num1 << " + " << num2 << " = " << num1 + num2;
        break;

    case '-':
        cout << num1 << " - " << num2 << " = " << num1 - num2;
        break;

    case '*':
        cout << num1 << " * " << num2 << " = " << num1 * num2;
        break;

    case '/':
        if (num2 == 0) {
            cout << "��������Ϊ��" << endl;
        }
        else {
            cout << num1 << " / " << num2 << " = " << num1 / num2;
        }
        break;

    case '%':
        if (num2 == 0) {
            cout << "��������Ϊ��" << endl;
        }
        else {
            cout << num1 << " % " << num2 << " = " << ((int)num1 % (int)num2);
        }
        break;

    default:
        cout << "�������Ч" << endl;
        break;
    }
    system("pause");
    return 0;
}