//присваивание структур
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
    inflatable bouquet = 
    {
        "sunflowers",
        0.20,
        12.49
    };
    inflatable choice;
    cout << "bouquet: " << bouquet.name << " for $";
    cout << bouquet.price << endl;
    choice = bouquet; //присваивание одной структуры другой
    cout << "choice: " << choice.name << " for $";
    cout << choice.price << endl;
    return 0;
} 