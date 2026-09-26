/*
Напишите программу, запрашивающую у пользователя ввод двух целых чисел.
Затем программа должна вычислить и выдать сумму всех целых чисел , лежащих
между этими двумя целыми. Предполагается , что меньшее значение вводится
первым. Например, если пользователь ввел 2 и 9, программа должна сообщить,
что сумма всех целых чисел от 2 до 9 равна 44.
*/
#include <iostream>
int main()
{
    using namespace std;
    int first_number, second_number;
    cin >> first_number >> second_number;
    int sum_numbers = 0;

    for (int i = first_number; i <= second_number; ++i)
    {
        sum_numbers += i;
    }
    cout << "Сумма целых чисел от " << first_number 
     << " до " << second_number << " = " << sum_numbers << endl;

    return 0;
}