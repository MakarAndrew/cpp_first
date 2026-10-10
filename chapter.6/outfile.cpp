//запись в файл
#include <iostream>
#include <fstream> // для файлового ввода-вывода
int main()
{
    using namespace std;
    char automobile [50];
    int year;
    double a_price;
    double d_price;
    ofstream outFile;//создание объекта для ввывода
    outFile.open("carinfo.txt"); //ассоциирование его с файлом
    cout << "Enter make and model of automobile: ";
    cin.getline(automobile, 50);
    cout << "Enter the model year: ";
    cin >> year;
    cout << "Enter the original asking price: ";
    cin >> a_price;
    d_price = 0.913 * a_price;

    //Отображение информации на экране с помощью cout
    cout << fixed;
    cout.precision(2);
    cout.setf(ios_base::showpoint);
    cout << "Make and model: " << automobile << endl;
    cout << "Year: " << year << endl;
    cout << "Was asking $" << a_price << endl;
    cout << "Now asking $" << d_price << endl;

    //Вывод той же информации с использование outFile вместо cout
    outFile << fixed; // Убрать научный вывод 1.4e+04
    outFile.precision(2); // Сколько цифр после запятой
    outFile.setf(ios_base::showpoint); // Всегда показывать запятую, даже если дробная часть нулевая
    outFile << "Make and model: " << automobile << endl;
    outFile << "Year: " << year << endl;
    outFile << "Was asking $" << a_price << endl;
    outFile << "Now asking $" << d_price << endl;
    outFile.close();
    return 0;
}