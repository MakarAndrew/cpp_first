// 6. Напишите программу, в которой функция main() вызывает определяемую
// пользователем функцию, принимающую в качестве аргумента расстояние в световых
// годах и возвращающую расстояние в астрономических единицах. Программа
// должна выдать запрос на ввод значения в световых годах и отобразить следую­
// щий результат:
// Enter the number of light years: 4.2
// 4.2 light years = 265608 astronomical units.

// Астрономическая единица равна среднему расстоянию Земли от Солнца (около
// 150 ООО ООО км, или 93 ООО ООО миль), а световой год соответствует расстоянию,
// пройденному лучом света за один земной год (примерно 10 триллионов кило­
// метров, или 6 триллионов миль). (Ближайшая звезда после Солнца находится
// на расстоянии 4,2 световых года.) Используйте тип douЬle (как в листинге 2.4)
// и следующий коэффициент преобразования:
// 1 световой год = 63 240 астртюмических единиц

#include <iostream>

double lyears_in_astronomical_units(double);

double lyears_in_astronomical_units(double value)
{
    // double astronomical_units = value * 63240;
    // return astronomical_units;
    return value * 63240;

}

int main()
{
    std::cout << "Enter the number of light years: ";
    double value;
    std::cin >> value;
    std::cout << value << " light years = " 
            << lyears_in_astronomical_units(value) << " astronomical units." << std::endl;
    return 0;
}