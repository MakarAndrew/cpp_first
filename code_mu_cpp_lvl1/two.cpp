// Дана строка. Выведите в консоль длину этой строки.
#include <iostream>
#include <string>
int main()
{
    using namespace std;
    cout << "Введи любой текст: ";
    string text;
    getline(cin, text);
    string text2 = "Пример строки";
    cout << "Дана строка: " << text2 << endl;
    cout << "Длина первой: " << text.size() << endl;
    cout << "Длина второй: " << text2.size() << endl;

    return 0;
}