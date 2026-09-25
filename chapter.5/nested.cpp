//вложенные циклы в двумерный массив
#include <iostream>
const int Cities = 5;
const int Years = 4;
int main()
{
    using namespace std;
    // Можно const char* cities[Cities]
    const string cities[Cities] = // массив указательей на 5 строк
    {
        "Gribble City",
        "Gribbletown",
        "New Gribble",
        "San Gribble",
        "Gribble Vista"
    };
    int maxtemp[Years] [Cities] = //двумерный массив
    {
        {96, 100, 87, 101, 105},
        {96, 98, 91, 107, 104},
        {96, 101, 93, 108, 107},
        {98, 103, 95, 109, 108}
    };
    cout << "Maximum temperatures for 2008 - 2011\n\n";

    for (int city = 0; city < Cities; ++city)
    {
        cout << cities[city] << ":\t";
        for (int year = 0; year < Years; ++year)
        {
            cout << maxtemp[year] [city] << "\t";
        }
        cout << endl;
    }
    //cin.get();
    return 0;
}