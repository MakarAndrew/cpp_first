/*
Выполните упражнение 7, но с применением операции new для размещения
структуры в свободном хранилище вместо объявления структурной перемен­ной.
Кроме того, сделайте так, чтобы программа сначала запрашивала диаметрпиццы
, а потом - наименование компании.
*/
#include <iostream>
#include <string>

struct Pizza
{
    std::string PizzaName;
    double DiametrPizza;
    double WeightPizza;
};

int main()
{

    using namespace std;
    Pizza* ptr = new Pizza;

    cout << "Enter diametr pizza: ";
    cin >> ptr->DiametrPizza;
    cin.get();

    cout << "Enter PizzaName: ";
    getline(cin, ptr->PizzaName);

    cout << "Enter weight pizza: ";
    cin >> ptr->WeightPizza;

    cout << "Pizza ptr " << ptr->PizzaName << " "
    << ptr->DiametrPizza << " " << ptr->WeightPizza << endl;

    delete ptr;
    return 0;
}