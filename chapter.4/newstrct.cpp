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
    inflatable* ps = new inflatable;//выделение памяти для структуры
    cout << "Enter name of inflatable item: ";
    cin.get(ps->name, 20);//первый метод для доступа к членам
    cout << "Enter volume in cubic feet: ";
    cin >> (*ps).volume;//второй метод для доступа к членам
    cout << "Enter price: $";
    cin >> ps->price;

    cout << "Name: " << (*ps).name << endl;
    cout << "Volume: " << ps->volume << " cubic feet\n";
    cout << "Price: $" << ps->price << endl;
    delete ps;
    return 0;
}