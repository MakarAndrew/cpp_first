// Напишите короткую программу, которая запрашивает рост в футах и дюймах и
// вес в фунтах. (Для хранения этой информации используйте три переменных.)
// Программа должна выдать индекс массы тела (body mass index BMI). Чтобы
// рассчитать BMI, сначала преобразуйте рост в футах и дюймах в рост в дюймах
// (1 фут = 12 дюймов). Затем преобразуйте рост в дюймах в рост в метрах, умно­
// жив на О.0254. Далее преобразуйте вес в фунтах в массу в килограммах, раз­
// делив на 2.2. После этого рассчитайте BMI, раздели в массу в килограммах на
// квадрат роста в метрах. Для представления различных коэффициентов преоб­
// разования используйте символические константы.

#include <iostream>
#include <cmath>

int main ()
{
    using namespace std;
    const int INCHES_PER_FOOT = 12;
    const double INCHES_PER_METER = 0.0254;
    const double POUND_PER_KG = 2.2;

    cout << "Enter height in feet: ";
    int feet;
    cin >> feet;
    cout << "Enter height in inch: ";
    int inch;
    cin >> inch;

    cout << "Enter weight: ";
    int pound;
    cin >> pound;
    double meters = (feet * INCHES_PER_FOOT + inch) * INCHES_PER_METER;
    double kg = pound / POUND_PER_KG;

    double body_mass_index = kg / pow(meters, 2);

    cout << "Your body mass index BMI = " << body_mass_index << endl;
    return 0;
}