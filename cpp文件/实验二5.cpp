#include <iostream>
using namespace std;

int main() {
    char c;
    int letters = 0;
    int spaces = 0;
    int number = 0;
    int others = 0;

    cout << "请输入一行字符：" << endl;

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

    cout << "英文字母个数为：" << letters << endl;
    cout << "空格个数为：" << spaces << endl;
    cout << "数字字符个数为：" << number << endl;
    cout << "其它字符个数为：" << others << endl;

    system("pause");
    return 0;
}