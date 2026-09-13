/*Дано число. Проверьте, отрицательное оно или нет. 
Выведите об этом информацию в консоль. */
#include <iostream>

int main()
{
    const int ZERO = 0;
    using namespace std;
    cout << "Enter number: ";
    int number;
    cin >> number;
    if (number < ZERO)
    {
        cout << number << " отрицательное\n";
    }
    else if (number > ZERO)
    {
        cout << number << " положительное\n";
    }
    else {
        cout << number << " это ноль)\n";
    }
    return 0;
}