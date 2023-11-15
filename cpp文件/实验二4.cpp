#include <iostream>
using namespace std;

int main() {
    char option;
    float num1, num2;

    cout << "请输入一个数字：" << endl;
    cin >> num1;

    cout << "请输入运算符：+、-、*、/、%：" << endl;
    cin >> option;

    cout << "请输入另一个数字：" << endl;
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
            cout << "除数不能为零" << endl;
        }
        else {
            cout << num1 << " / " << num2 << " = " << num1 / num2;
        }
        break;

    case '%':
        if (num2 == 0) {
            cout << "除数不能为零" << endl;
        }
        else {
            cout << num1 << " % " << num2 << " = " << ((int)num1 % (int)num2);
        }
        break;

    default:
        cout << "运算符无效" << endl;
        break;
    }
    system("pause");
    return 0;
}