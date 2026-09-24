//использование cin.get(char)
#include <iostream>
int main()
{
    using namespace std;
    char ch;
    int count = 0;
    cout << "Enter characters; enter # to quite:\n";
    cin.get(ch);
    while (ch != '#')
    {
        cout << ch;
        ++count;
        cin.get(ch); //подсчет всех символов даже пробелов
    }
    cout << endl << count << " characters read\n";
    return 0;
}