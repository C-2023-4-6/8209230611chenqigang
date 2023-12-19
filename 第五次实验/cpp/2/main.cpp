#include <iostream>
#include"student.h"

using namespace std;

int main() {
    Student stud;
    Student stud1(007,"tcg",'m');
    stud.set_value(006,"tcg",'m');
    stud1.display();
    stud.display();
    return 0;
}
