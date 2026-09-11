// принудительное изменение типов
#include <iostream>
int main()
{
    using namespace std;
    int auks, bats, coots;
    // следующие оператор суммирует значение типа double,
    // а полученный результат приоразует в тип int
    auks = 19.99 + 11.99;

    //эти опреаторы суммируют цилочисленные значения
    bats = (int) 19.99 + (int) 11.99; // старый синтаксис
    coots = int (19.99) + int (11.99); // новый синтаксис С++
    cout << "auks = " << auks << ", bats = " << bats;
    cout << ", coots = " << coots  << endl;

    char ch = 'Z';
    cout << "The code for " << ch << " is";  //вывод в формате char
    cout << int(ch) << endl; //вывод в формате int
    cout << "Yes, the code is "; //использвоание static_cast
    cout << static_cast<int>(ch) << endl;
    return 0;
}