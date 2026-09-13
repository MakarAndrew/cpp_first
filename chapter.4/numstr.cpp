// строковый вывод после числового
#include <iostream>
int main()
{
    using namespace std;
    cout << "What years was your house build?\n";
    int year;
    cin >> year;
    cin.get();
    cout << "What is its street address?\n";
    char address[80];
    cin.getline(address, 80);
    cout << "Year build: " << year << endl;
    cout << "Address: " << address << endl;
    cout << "Done!\n";
    return 0;
}