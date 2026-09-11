// Напишите короткую программу, которая запрашивает рост в дюймах 
// и преоб­разует их в футы и дюймы. Программа должна использовать 
// символ подчерки­вания для обозначения позиции, 
// где будет производиться ввод. Для представле­ния 
// коэффициента преобразования используйте символьную константу const.

#include <iostream>
int main()
{
    using namespace std;
    const int INCHES_PER_FOOT = 12;
    cout << "Enter your height in inch: ___\b\b\b";
    int height;
    cin >> height;
    int feet = height / INCHES_PER_FOOT;
    int inch = height % INCHES_PER_FOOT;
    cout << "Your height in feet and inch: " << feet << " футов и " << inch << " дюймов." << endl;

    return 0;
}