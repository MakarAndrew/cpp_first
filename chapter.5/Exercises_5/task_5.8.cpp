/*
Напишите программу, которая использует массив char и цикл для чтения по
одному слову за раз до тех пор, пока не будет введено слово done. Затем 
про­грамма должна сообщить количество введенных слов (исключая done). Пример
запуска должен быть таким:
Вводите слова (для завершения введите слово done):
anteater birthday category dumps ter
envy finagle geometry done for sure
Вы ввели 7 слов.
Вы должны включить заголовочный файл cstring и применять функцию
strcmp() для выполнения проверки.
*/
#include <iostream>
#include <cstring>
int main()
{
    using namespace std;
    const int ArSize = 100;
    char word[ArSize];
    int count = 0;
    cout << "Вводите слова (для завершения введите слово done): " << endl;
    cin >> word;

    while (strcmp(word, "done"))
    {
        ++count;
        cin >> word;
    }

    cout << "Вы ввели " << count << " слов.\n";
    return 0;
}