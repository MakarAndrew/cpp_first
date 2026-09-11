// использует опрецию % для преобразования фунтов в стоуны
#include <iostream>
int main()
{
    using namespace std;
    const int Lbs_per_stn = 14;
    int lbs;

    cout << "Enter your weight in pounds: ";
    cin >> lbs;
    int stone = lbs / Lbs_per_stn; // количество целых стоунов
    int pounds = lbs % Lbs_per_stn; // отстаток в фунтах
    cout << lbs << " pounds are " << stone
    << " stone, " << pounds << " pounds(s).\n";
    return 0;
}