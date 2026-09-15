// Простая структура
#include <iostream>
struct inflatable
{
    char name[20];
    float volume;
    double price;
};

int main()
{
    using namespace std;
    inflatable guest =
    {
        "Glorios Gloria", // name
        1.88, // volume
        29.99 // value
    }; // guest - структурная переменная типа incflatable
    inflatable pal =
    {
        "Audacious Artur",
        3.12,
        32.99
    }; // pal - вторая переменная типа incflatable

    cout << "Expand your guest list with "  << guest.name;
    cout << " and " << pal.name << "!\n"; //pal.name - член name переменной pal
    cout << "You can have both for $ ";
    cout << guest.price + pal.price << "!\n";
    cout << guest.price << endl;
    cout << pal.price << endl;

    return 0;
} 