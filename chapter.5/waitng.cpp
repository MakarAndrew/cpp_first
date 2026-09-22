//использование clock() в цикле временной задержки
#include <iostream>
#include <ctime>
int main()
{
    using namespace std;
    cout << "Enter the delay time, in seconds: ";
    float secs;
    cin >> secs;
    clock_t delay = secs * CLOCKS_PER_SEC; // преобразование в тики
    cout << "starting\a\n";
    clock_t start = clock();
    while (clock() - start < delay){;} //ожидание истечения времени 
    // обрати внимание на точки с запятой
    cout << "done \a\n";
    return 0;
    
    
}