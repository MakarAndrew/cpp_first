// Напишите программу, которая запрашивает текущую численность населения
// Земли и текущую численность населения России (или любой другой страны).
// Сохраните эту информацию в переменных типа long long. В качестве резуль­
// тата программа должна отображать процентное соотношение численности
// населения России (или выбранной страны) и всего мира. Результат выполнения
// программы должен выглядеть следующим образом:
// Enter the world's population: 6898758899
// Enter the population of Russia: 310783781
// The populati on of the Russia is 4.50492% of the world population.

#include <iostream>

int main()
{
    using namespace std;
    cout << "Enter the world's population: ";
    long long world_population;
    cin >> world_population;

    cout << "Enter the population of Russia: ";
    long long russia_population;
    cin >> russia_population;

    double percent_population = double(russia_population) / double(world_population) * 100;
    
    cout << "The populati on of Russia is " << percent_population << "%" << " of the world population." << endl;
    return 0;
}