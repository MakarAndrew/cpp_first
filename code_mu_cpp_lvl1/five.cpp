/*
Дано число:
int num = 123;

Преобразуйте это число в строку:
std::string "123"
*/
#include <iostream>
#include <string>
#include <sstream>
int main()
{
    using namespace std;
    int num = 123;
    cout << "Число: " << num << endl;
    string str = to_string(num);
    cout << "Строка: " << str << endl;

    return 0;
} 