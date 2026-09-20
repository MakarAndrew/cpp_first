/*
Напишите программу, которая приглашает пользователя ввести три результа­та
забега на 40 ярдов (или 40 метров, если желаете) и затем отображает эти
значения и их среднее. Для хранения данных применяйте объект array. (Если
объект array не доступен, воспользуйтесь встроенным массивом.)
*/
#include <iostream>
#include <array>

using namespace std;
int main()
{
    const int Metr = 40;
    array<double, 3> result;

    cout << "Enter 1 result: ";
    cin >> result[0];

    cout << "Enter 2 result: ";
    cin >> result[1];

    cout << "Enter 3 result: ";
    cin >> result[2];

    cout << "1 result на " << Metr << " метров = "
    << result[0] << endl;
    cout << "2 result на " << Metr << " метров = "
    << result[1] << endl;
    cout << "3 result на " << Metr << " метров = "
    << result[2] << endl;

    double midl = (result[0] + result[1] + result[2]) / 3;
    cout << "Среднее арифметическое трех элементов = " << midl << " на "
    << Metr << " метров" << endl;

    return 0;
}