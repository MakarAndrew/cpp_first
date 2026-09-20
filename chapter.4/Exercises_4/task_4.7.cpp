/*
Вильям Вингейт (William Wingate) заведует службой анализа рынка пиццы.
O каждой пицце он записывает следующую информацию:
• наименование компании - производителя пиццы , которое может состоять
из более чем одного слова;
• диаметр пиццы;
• вес пиццы.
• Разработайте структуру, которая может содержать всю эту информацию, и
  напишите программу, использующую структурную переменную этого типа.
  Программа должна запрашивать у пользователя каждый из перечисленных
  показателей и затем отображать введенную информацию . Применяйте cin
  (или его методы) и cout.
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
    Pizza analiz = {};

    cout << "Enter PizzaName: ";
    getline(cin, analiz.PizzaName);

    cout << "Enter diametr pizza: ";
    cin >> analiz.DiametrPizza;

    cout << "Enter weight pizza: ";
    cin >> analiz.WeightPizza;

    cout << "Pizza analiz " << analiz.PizzaName << " "
    << analiz.DiametrPizza << " " << analiz.WeightPizza << endl;
    
    return 0;
}