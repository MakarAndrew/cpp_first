// Напишите программу, которая запрашивает количество секунд в виде целого
// значения (используйте тип long или long long, если последний доступен) и
// затем отображает эквивалентное значение в сутках, часах, минутах и секундах.
// Для представления количества часов в сутках, количества минут в часе и
// количества секунд в минуте используйте символические константы. Результат
// выполнения программы должен выглядеть следующим образом:
// 31600000 seconds = 365 days, 17 hours, 46 minutes, 40 seconds

#include <iostream>

int main()
{
    using namespace std;
    const int SECONDS_PER_MINUTE = 60;
    const int MINUTES_PER_HOUR = 60;
    const int HOURS_PER_DAY = 24;

    long long seconds;
    cin >> seconds;

    int minutes = seconds / SECONDS_PER_MINUTE; // секунды в минуты (получили всего минут)

    int seconds_new = seconds % SECONDS_PER_MINUTE; //  остаток секунд

    int hours = minutes / MINUTES_PER_HOUR; // минуты в часы (получили всего часов)
    minutes = minutes % MINUTES_PER_HOUR; // остаток минут

    int days = hours / HOURS_PER_DAY; // часы в дни (получили всего дней)
    hours = hours % HOURS_PER_DAY; // остаток часов

    cout << seconds << " seconds = " << days << " days, " << hours << " hours, "
    << minutes << " minutes, " << seconds_new << " seconds" << endl;
    return 0;
}