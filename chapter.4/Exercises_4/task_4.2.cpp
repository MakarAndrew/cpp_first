//Перепишите листинг 4.4, применив класс С++ string вместо массивов char.

// #include <iostream>
// int main()
// {
//     using namespace std;
//     const int ArSize = 20;
//     char name[ArSize];
//     char dessert[ArSize];

//     cout << "Enter your name:\n";
//     cin.getline(name, ArSize);
//     cout << "Enter your favorite dessert:\n";
//     cin.getline(dessert, ArSize);
//     cout << "I have some delicious " << dessert;
//     cout << " for you, " << name << ".\n";
//     return 0;
// }
#include <iostream>
#include <string>
int main()
{
    using namespace std;
    string name;
    string dessert;

    cout << "Enter your name:\n";
    getline(cin, name);
    cout << "Enter your favorite dessert:\n";
    getline(cin, dessert);
    cout << "I have some delicious " << dessert;
    cout << " for you, " << name << ".\n";
    return 0;
}