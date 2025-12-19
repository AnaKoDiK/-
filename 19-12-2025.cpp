#include <iostream>
using namespace std;
\\task 1
int total(int price, int quantity)
{
    return price * quantity;
}
int main()
{
    int price = 500;
    int quantity = 5;
    cout << "Итоговая стоимость: " << total(price, quantity) << endl;
    cout << "Исходная цена: " << price << endl;
    cout << "Исходное количество: " << quantity << endl;
    return 0;
}
\\task 2
void hill(int &health, int chislo)
{
    health += chislo;
}
int main() 
{
    int health = 35;
    cout << "Здоровье в игре до полученного лечения: " << health << endl;
    hill(health, 15);
    cout << "Здоровье в игре после получения лечения: " << health << endl;
    return 0;
}
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
