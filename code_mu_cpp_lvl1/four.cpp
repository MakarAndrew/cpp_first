//  Даны два слова. Проверьте, что первые буквы этих слов совпадают. 
#include <iostream>
#include <string>
int main()
{
    using namespace std;
    string text1;
    string text2;
    cout << "Введи 2 слова: " << endl;
    cout << "Введи первое слова: ";
    getline(cin, text1);
    cout << "Введи второе слова: ";
    getline(cin, text2);
    if (text1[0] == text2[0]){
        cout << "Первые буквы совпадают" << endl;
    } else {
        cout << "Первые буквы не совпадают" << endl;
    }
    return 0;
} 