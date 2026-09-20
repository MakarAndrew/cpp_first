/*
Структура CandyBar включает три члена, как описано в предыдущем упражне­нии.
Напишите программу, которая создает массив из трех структур CandyBar,
инициализирует их значениями по вашему усмотрению и затем отображает
со­держимое каждой структуры.
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

struct Fish
{
    string NameFish;
    double Weight;
    int Calories;
};

int main()
{
    CandyBar snack[3] =
    {
        {"Mocha Munch", 2.3, 350},
        {"Tort Andrew", 33.4, 600},
        {"Keks New", 5.5, 250}
    };

    Fish ylov_fish[3] =
    {
        {"Okun Rostov", 10.3, 1350},
        {"Sharp Monaco", 303.4, 1600},
        {"Karas", 500.5, 1250}
    };

    Fish* ptr = ylov_fish;


    cout << "Содержимое CandyBar[0]: " << snack[0].NameBar << " "
    << snack[0].Weight << " " << snack[0].Calories << endl;
    cout << "Содержимое CandyBar[1]: " << snack[1].NameBar << " "
    << snack[1].Weight << " " << snack[1].Calories << endl;
    cout << "Содержимое CandyBar[2]: " << snack[2].NameBar << " "
    << snack[2].Weight << " " << snack[2].Calories << endl;
    cout << endl;

    cout << "Содержимое ylov_fish[0]: " << ptr->NameFish << " "
    << ptr->Weight << " " << ptr->Calories << endl;
    cout << "Содержимое ylov_fish[1]: " << (ptr + 1)->NameFish << " "
    << (ptr + 1)->Weight << " " << (ptr + 1)->Calories << endl;
    cout << "Содержимое ylov_fish[2]: " << (ptr + 2)->NameFish << " "
    << (ptr + 2)->Weight << " " << (ptr + 2)->Calories << endl;
    return 0;
}