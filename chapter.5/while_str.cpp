#include <iostream>
#include <cstring>
#include <string>

int main()
{
    using namespace std;
    string name; // Вместо char name[ArSize]

    cout << "Your first name: ";
    cin >> name;

    cout << "Here is your name, verticalized and ASCIIiaed:\n";
    int i = 0;

    while (i < name.size()) // or name.length()
    {
        cout << name[i] << ": " << int(name[i]) << endl;
        i++;
    }

    int j = name.length() - 1;

    while (j >= 0)
    {
        cout << name[j];
        j--;
    }
    cout << endl;
    return 0;
}