/*
Выполните упражнение 5, но используя двумерный массив для сохранения дан­
ных о месячных продажах за 3 года. Выдайте общую сумму продаж за каждый
год и за все годы вместе.
*/
#include <iostream>
#include <string>
int main()
{
    using namespace std;
    string months[12] = 
    {
        "Январь", "Февраль", "Март", "Апрель", 
        "Май", "Июнь", "Июль", "Август", "Сентябрь", 
        "Октябрь", "Ноябрь", "Декабрь"
    };

    int sales[3][12] = {};
    int sum_sales = 0;

    for (int i = 0; i < 3; ++i)
    {
        cout << "Cводка за " << i + 1 << " год\n";
        int year_total = 0;
        for (int j = 0; j < 12; ++j)
        {
            cout << months[j] << " = ";
            cin >> sales[i][j];
            year_total += sales[i][j];

            sum_sales += sales[i][j];
        }
        cout << endl << "Cумма за год = " << year_total << endl;
        cout << endl;
    }
    
    cout << "Общая сумма = " << sum_sales << endl;
    return 0;
}