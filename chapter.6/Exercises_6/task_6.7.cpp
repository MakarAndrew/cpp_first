/*
Напишите программу, которая читает слова по одному за раз, 
пока не будет введена отдельная буква q. После этого 
программа должна сообщить количество слов, начинающихся с 
гласных, количество слов, начинающихся с согласных, а также 
количество слов, не попадающих ни в одну из этих категорий.

Одним из возможных подходов может быть применение isalpha() 
для различения слов, начинающихся с букв, и остальных, с 
последующим применением if или switch для идентификации 
тех слов, прошедших проверку isalpha(), которые начинаются 
с гласных. 
Пример запуска может выглядеть так:

Enter words (q to quit):
The 12 awesome oxen ambled quietly across 15 meters of lawn. q
5 words beginning with vowels
4 words beginning with consonants
2 others
*/

#include <iostream>
#include <cctype>
#include <string>
using namespace std;

bool isVowel(char ch){
    ch = tolower(ch);
    return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';

}

int main()
{
    int vowels = 0, consonants = 0, others = 0;
    string word;

    cout << "Enter words (q to quit):\n";
    while (cin >> word && word != "q")
    {
        if (!isalpha(word[0])){
            others++;
        } else if (isVowel(word[0])){
            vowels++;
        } else {
            consonants++;
        }
    }

    cout << vowels << " words beginning with vowels\n";
    cout << consonants << " words beginning with consonants\n";
    cout << others << " others\n";
    return 0;
}