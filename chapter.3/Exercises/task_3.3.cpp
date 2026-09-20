// Напишите программу, которая запрашивает широту в градусах, минутах и се­
// кундах, после чего отображает широту в десятичном формате. В одной минуте
// 60 угловых секунд, а в одном градусе 60 угловых минут; представьте эти зна­
// чения с помощью символических констант. Для каждого вводимого значения
// должна использоваться отдельная переменная. Результат выполнения програм­
// мы должен выглядеть следующим образом:
// Enter а latitude in degrees, minutes, and seconds:
// First, enter the degrees: 37
// Next, enter the minutes of arc: 51
// Finally, enter the seconds of arc: 19
// 37 degrees, 51 minutes, 19 seconds = 37.8553 degrees

#include <iostream>

int main ()
{
    using namespace std;
    const double SECONDS_IN_MINUTES = 60;
    const double DEGRES_IN_MINUTES = 60;


    cout << "Enter а latitude in degrees, minutes, and seconds: " << endl;
    cout << "First, enter the degrees: ";
    int degrees;
    cin >> degrees;
    
    cout << "Next, enter the minutes of arc: ";
    int minutes;
    cin >> minutes;

    cout << "Finally, enter the seconds of arc: ";
    int seconds;
    cin >> seconds;

    double result_of_minutes = seconds / SECONDS_IN_MINUTES + minutes;
    double result_of_degress = degrees + (result_of_minutes / DEGRES_IN_MINUTES);
    cout << degrees << " degrees, " << minutes << " minutes, "
    << seconds << " seconds = " << result_of_degress << " degrees" << endl;
    return 0;
}