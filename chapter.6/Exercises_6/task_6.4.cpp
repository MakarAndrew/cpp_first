/*
4. Когда вы вступите в Благотворительный Орден Программистов (БОП),
к вам могут обращаться на заседаниях БОП по вашему реальному имени,
по должности либо секретному имени БОП. Напишите программу, которая
может выводить списки членов по реальным именам, должностям,
секретным именам либо по предпочтению самого члена.
В основу положите следующую структуру:
Структура имен Благотворительного Ордена Программистов (БОП)
struct bop {
    char fullname[strsize];    // реальное имя
    char title[strsize];       // должность
    char bopname[strsize];     // секретное имя БОП
    int preference;            // 0 = полное имя, 1 = титул, 2 = имя БОП
};
В этой программе создайте небольшой массив таких структур и инициализируйте его соответствующими значениями. Пусть программа запустит цикл, который даст возможность пользователю выбирать разные альтернативы:
a. display by name
b. display by title
c. display by bopname
d. display by preference
q. quit
Обратите внимание, что "display by preference" (отображать по предпочтениям)
не означает, что нужно отобразить член preference; это значит,
что необходимо отобразить член структуры, который соответствует
значению preference. Например, если preference равно 1,
то выбор d должен вызвать отображение должности данного программиста.
*/
#include <iostream>
using namespace std;
void show_choice()
{
    cout << "Benevolent Order of programmers Report\n"
            "a. dispaly by name           b. dispaly by title\n"
            "c. dispaly by bopname        d. dispaly by preference\n"
            "q. quit\n";
}

int main()
{
    const int strsize = 80;
    const int MEMBERS_COUNT = 5;
    struct bop
    {
        char fullname[strsize]; // реальное имя
        char title[strsize];    // должность
        char bopname[strsize];  // секретное имя БОП
        int preference;         // 0 = полное имя, 1 = титул, 2 = имя БОП
    };
    bop bob[MEMBERS_COUNT]{
        {"Wimp Macho", "Junior Programmer", "MIPS", 1},
        {"Raki Rhodes", "Junior Programmer", "Analyst Trainee", 0},
        {"Celia Laiter", "Junior Programmer", "MIPS", 2},
        {"Hoppy Hipman", "Junior Programmer", "Analyst Trainee", 1},
        {"Pat Hand", "Junior Programmer", "LOOPY", 2}};
    show_choice();

    char choice;
    cout << "Enter your choice: ";
    cin >> choice;

    while (choice != 'q')
    {
        switch (choice)
        {
        case 'a':
            for (int i = 0; i < MEMBERS_COUNT; i++)
            {
                cout << bob[i].fullname << endl;
            }
            break;

        case 'b':
            for (int i = 0; i < MEMBERS_COUNT; i++)
            {
                cout << bob[i].title << endl;
            }
            break;

        case 'c':
            for (int i = 0; i < MEMBERS_COUNT; i++)
            {
                cout << bob[i].bopname << endl;
            }
            break;

        case 'd':
            for (int i = 0; i < MEMBERS_COUNT; i++)
            {
                if (bob[i].preference == 0)
                {
                    cout << bob[i].fullname << endl;
                }
                else if (bob[i].preference == 1)
                {
                    cout << bob[i].title << endl;
                }
                else
                {
                    cout << bob[i].bopname << endl;
                }
            }
            break;

        default:
            cout << "Please enter a, b, c, d, or q: " << endl;
        }

        cout << "Enter your choice: ";
        cin >> choice;
    }

    cout << "Bye!\n";

    return 0;
}
