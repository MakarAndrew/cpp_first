/*
Дано число:
int num = 10;

Проверьте, что это число находится в диапазоне от 1 до 100. 
*/
#include <iostream>
int main()
{
    using namespace std;
    cout << "Введи число: ";
    int num;
    cin >> num;
    if (num >= 1 && num <= 100){
        cout << "Число находится в диапазоне от 1 до 100\n";
    } else {
        cout << "Число НЕ находится в диапазоне от 1 до 100\n";
    }
    return 0;
} 