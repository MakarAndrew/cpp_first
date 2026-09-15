//массив структур
#include <iostream>
using namespace std;

struct inflatable
{
    string name;
    float volume;
    double price;
};

int main()
{
    inflatable guests[2] = //инициализация массива структур
    {
        {"Bambi", 0.5, 21.99}, // первая структура массива
        {"Godzilla", 2000, 565.99}    //вторая структура массива
    };
    cout << "The guests " << guests[0].name << " and " << guests[1].name
        << "\nhave a combined volume of "
        << guests[0].volume + guests[1].volume << " cubic feet.\n";
    return 0;
} 