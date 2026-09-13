// присваивание, сложение, добавление
#include <iostream>
#include <string>

int main()
{
    using namespace std;
    string s1 = "penguin";
    string s2, s3;
    // string s3;

    // Присваивание одного объекта string другому
    cout << "You can assign one string object to another: s2 = s1\n";
    s2 = s1;
    cout << "s1: " << s1 << " ,52: " << s2 << endl;

    // Присваивание строки в стиле С объекту string
    cout << "Уоu can assign а C-stylestring to аstring object.\n";
    cout << " s2 = \"buzzard\"\n";
    s2 = "buzzard";
    cout << "s2: " << s2 << endl;

    // Конкатенация строк
    cout << "You can concatenate strings: sЗ = s1 + s2\n";
    s3 = s1 + s2;
    cout << "sЗ: " << s3 << endl;

    // Добавление строки
    cout << " You can append strings.\n";
    s1  += s2 ;
    cout << "s1 += s2 yields s1 = " << s1 << endl ;
    s2 += " for а day";
    cout << " s2 += \" for а day\" yields s2 = " << s2 << endl;
    return 0;
}