/*
Напишите предшественник программы, управляемой меню.
Она должна отображать меню из четырех пунктов,
каждый из них помечен буквой. Если пользователь вводит букву,
отличающуюся от четырех допустимых, программа должна повторно
приглашать его ввести правильное значение до тех пор, пока он
этого не сделает. Затем она должна выполнить некоторое простое
действие на основе пользовательского выбора. Работа программы
должна выглядеть примерно так:
Please enter one of the following choices:
c) carnivore    p) pianist
t) tree         g) game
f
Please enter a c, p, t, or g: q
Please enter a c, p, t, or g: t
A maple is a tree.
*/

#include <iostream>
using namespace std;
void showmenu();
int main()
{
    showmenu();
    char choice;
    // cin >> choice
    while (cin >> choice)
    {
        switch (choice)
        {
        case 'c':
            cout << "A maple is a carnivore.\n";
            break;
        case 'p':
            cout << "A maple is a pianist.\n";
            break;
        case 't':
            cout << "A maple is a tree.\n";
            break;
        case 'g':
            cout << "A maple is a game.\n";
            break;

        default:
            cout << "Please enter a c, p, t, or g: ";
            continue;
        }
        break;
    }
    cout << "Bye!\n";

    return 0;
}
void showmenu()
{
    cout << "Please enter one of the following choices:\n"
            "c) carnivore    p) pianist\n"
            "t) tree         g) game\n";
}
