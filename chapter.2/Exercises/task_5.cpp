// 5. Напишите программу, в которой функция main() вызывает определяемую
// пользователем функцию, принимающую в качестве аргумента значение темпе­
// ратуры по Цельсию и возвращающую эквивалентное значение температуры по
// Фаренгейту. Программа должна выдать запрос на ввод значения по Цельсию и
// отобразить следующий результат:
// Please enter а Celsius value: 20
// 20 degrees Celsius is 68 degrees Fahrenhe it.
// Вот формула для этого преобразования:
// Температура в градусах по Фаренгейту =
// 1,8 * Температура в градусах по Целъсию + 32

#include <iostream>

double celsius_in_fahrenheit(double);

double celsius_in_fahrenheit(double celsius)
{
    double fahrenheit = 1.8 * celsius + 32;
    return fahrenheit;
}

int main()
{
    std::cout << "Please enter а Celsius value: ";
    double celsius;
    std::cin >> celsius;
    std::cout << celsius << " degrees Celsius is " 
              << celsius_in_fahrenheit(celsius) << " degrees Fahrenheit." << std::endl;
    return 0;
}