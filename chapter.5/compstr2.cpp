// сравнение строк с ипользованием класса string
#include <iostream>
#include <string>
int main()
{
    using namespace std;
    string word = "?ate";
    string need_word = "mate";
    for (char ch = 'a'; word != need_word; ch++)
    {
        cout << word << endl;
        word[0] = ch;   
    }
    cout << "After loop ends, word is " << word << endl;
    return 0;
}