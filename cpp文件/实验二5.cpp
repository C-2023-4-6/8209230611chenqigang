#include <iostream>
using namespace std;

int main() {
    char c;
    int letters = 0;
    int spaces = 0;
    int number = 0;
    int others = 0;

    cout << "������һ���ַ���" << endl;

    while ((c = getchar()) != '\n') {
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            letters++;
        }
        else if (c == ' ') {
            spaces++;
        }
        else if (c >= '0' && c <= '9') {
            number++;
        }
        else {
            others++;
        }
    }

    cout << "Ӣ����ĸ����Ϊ��" << letters << endl;
    cout << "�ո����Ϊ��" << spaces << endl;
    cout << "�����ַ�����Ϊ��" << number << endl;
    cout << "�����ַ�����Ϊ��" << others << endl;

    system("pause");
    return 0;
}