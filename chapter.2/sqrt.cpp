// sqrt.cpp - испоьзование функции sqrt()

#include <iostream>
#include <cmath>

int main()
{
    using namespace std;

    double area;
    cout <<"Enter the floor area, in square feet, of your home: ";
    cin >> area;
    double side = sqrt(area);
    cout << "That is the equivalent of a square " << side
         << " feet to the side." << endl;
    cout << "How fascinating!" << endl;
    cout << "Проверка что Tab через кавычку работает" << endl;
    return 0;
}
