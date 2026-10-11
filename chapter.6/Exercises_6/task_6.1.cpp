/*
Напишите программу, которая читает клавиатурный ввод 
до символа @ и повто­ряет его, за исключением десятичных цифр, 
преобразуя каждую букву верхнего
регистра в букву нижнего регистра и наоборот. 
(Не забудьте о семействе функ­ций cctype.)
*/

#include <iostream>
#include <cctype>
int main()
{
    using namespace std;
    char ch;
    char upp;
    char low;
    while (cin.get(ch) && ch != '@')
    {
        if (!(isdigit(ch))){
            if (ch == tolower(ch)){
                upp = toupper(ch);
                cout << upp;
            }
            else {
                cout << static_cast<char>(tolower(ch));
                // low = tolower(ch);
                // cout << low;
            }
        }
    }
    cout << endl << "Done!" << endl;
    return 0;
}