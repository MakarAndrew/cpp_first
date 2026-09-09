// сравнение типа char и int
#include <iostream>
int main()
{
    using namespace std;
    char ch = 'M';
    int i = ch;

    cout << "The ASCII code for " << ch << " is " << i << endl;
    cout << "ADd one to the char code:" << endl;

    ch = ch + 1;
    i = ch;
    cout << "char = " << ch << " is " << i << endl;

    cout << "Displaing char ch using cout,put(ch): ";
    cout.put(ch);
    cout.put('!');
    cout << endl;

    return 0;
}