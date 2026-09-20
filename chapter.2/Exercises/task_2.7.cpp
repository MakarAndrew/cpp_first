// 7. Напишите программу, которая выдает запрос на ввод значений часов и минут.
// Функция main() должна передать эти два значения функции, имеющей тип
// void, которая отобразит эти два значения в следующем виде:
// Enter the number of hours: 9
// Enter the number of minutes: 28
// Time: 9:28

#include <iostream>

void print_time(int hours, int minutes)
{
    std::cout << "Time: " << hours << ":" << minutes;
}

int main()
{
    std::cout << "Enter the number of hours: ";
    int hours;
    std::cin >> hours;

    std::cout << "Enter the number of minutes: ";
    int minutes;
    std::cin >> minutes;

    print_time(hours, minutes);
    std::cout << std::endl;
    return 0;
}