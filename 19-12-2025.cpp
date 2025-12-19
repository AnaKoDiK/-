#include <iostream>
using namespace std;
\\task 3

void print(string name,  int age = 14)
{
    cout << "Имя ученика: " << name << endl;
    cout << "Возраст ученика: " << age << endl;
}
int main()
{
    print("Алексей", 18);
    print("Катерина");
    return 0;
}
