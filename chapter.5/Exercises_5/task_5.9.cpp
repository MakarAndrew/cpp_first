/*
Напишите программу, соответствующую описанию программы из упражнения 8,
но с использованием объекта string вместо символьного массива. Включите
заголовочный файл string и применяйте операции отношений для 
выполне­ния проверки.
*/
#include <iostream>
#include <string>
int main()
{
    using namespace std;
    string word;
    int count = 0;
    cout << "Вводите слова (для завершения введите слово done): " << endl;
    cin >> word;

    while (word != "done")
    {
        ++count;
        cin >> word;
    }

    cout << "Вы ввели " << count << " слов.\n";
    return 0;
}