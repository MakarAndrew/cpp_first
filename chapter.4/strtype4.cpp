#include <iostream>
#include <string>
#include <cstring>
int main()
{
    using namespace std;
    char charr[20];
    string str;

    cout << "Length of string in charr before input: "
        << strlen(charr) << endl;

    cout << "Length of string in str befor input: "
        << str.size() << endl;

    cout << "Enter a line of texts:\n";
    cin.getline(charr, 20);
    cout << "You entered: " << charr << endl;
    cout << "Enter another line if text:\n";
    getline(cin, str); //теперь cin - аргумент; спецификатор длины отсуствует
    cout << "You entered: " << str << endl;
    cout << "Length of string in charr after input: "
        << strlen(charr) << endl;
    cout << "Length of string in str after input: "
        << str.size() << endl;
    return 0;
}