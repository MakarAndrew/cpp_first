//чтение символа до конца файла
#include <iostream>
int main()
{
    using namespace std;
    char ch;
    int count = 0;
    cin.get(ch);
    while (cin.fail() == false)
    {
        cout << ch;
        ++count;
        cin.get(ch); //подсчет всех символов даже пробелов
    }
    cout << endl << count << " characters read\n";
    return 0;
}