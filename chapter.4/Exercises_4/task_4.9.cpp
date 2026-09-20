/*
Выполните упражнение 6, но вместо объявления массива из трех структур
CandyBar используйте операцию new для динамического размещения массива.
*/

#include <iostream>
#include <string>
using namespace std;
struct CandyBar
{
    string NameBar;
    double Weight;
    int Calories;
};

int main()
{
    CandyBar* ptr = new CandyBar[3]{
        {"Mocha Munch", 2.3, 350},
        {"Tort Andrew", 33.4, 600},
        {"Keks New", 5.5, 250}
    };
    
    // ptr[0] = {"Mocha Munch", 2.3, 350};
    // ptr[1] = {"Tort Andrew", 33.4, 600};
    // ptr[2] = {"Keks New", 5.5, 250};

    cout << "Содержимое CandyBar[0]: " << ptr->NameBar << " "
    << ptr->Weight << " " << ptr->Calories << endl;
    cout << "Содержимое CandyBar[1]: " << (ptr+1)->NameBar << " "
    << (ptr+1)->Weight << " " << (ptr+1)->Calories << endl;
    cout << "Содержимое CandyBar[2]: " << (ptr+2)->NameBar << " "
    << (ptr+2)->Weight << " " << (ptr+2)->Calories << endl;

    delete[] ptr;
    return 0;
}