// outfrunc.cpp - определение собственной функции

#include <iostream>
using namespace std;
void simon(int);

int main()
{
    simon(3);
    cout << "Введите число: ";
    int count;
    cin >> count;
    simon(count);
    cout << "Успешно!" << endl;
    return 0;
}

void simon(int n)
{
    cout << "Симон сказал коснись пальца ноги " << n << " раз." << endl;

}