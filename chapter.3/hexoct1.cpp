// Показывает шестнадцатиричные и восьмеричные литералы
#include <iostream>
int main()
{
    using namespace std;
    int chest = 42;
    int waist = 0x42;
    int inseam = 042;

    cout << chest << " 42\n";
    cout << waist << " 0x42\n";
    cout << inseam << " 042\n";
    return 0;
}