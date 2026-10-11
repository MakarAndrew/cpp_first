/*
Напишите программу, читающую в массив double до 10 
значений пожертво­ваний. (Или, если хотите, 
используйте шаблонный объект array.) Программа
должна прекращать ввод при получении нечисловой величины. 
Она должна выдавать среднее значение полученных чисел, 
а также количество значений в массиве, превышающих среднее.
*/
#include <iostream>
int main()
{
    using namespace std;
    const int MAX_SIZE = 10; // До 10 числе в массиве
    double arr[MAX_SIZE];
    int k = 0;
    double sum = 0.0;
    for (int i = 0; i < MAX_SIZE; i++){
        if (cin >> arr[i]){
            sum += arr[i];
            k += 1; 
        }
        else{
            cout << "Ввели не число на этом все!" << endl;
            break;
        }
    }

    double sred = 0.0;
    if (k == 0){
        cout << "Числа не введены" << endl;
    }
    else{
        sred = sum / k;
    }
    cout << "Среднее: " << sred << endl;

    int up_sred = 0;
    for (int j = 0; j < k; j++){
        if (arr[j] > sred){
            up_sred++;
        }
    }
    cout << "Превышают среднее: " << up_sred << endl;

    return 0;
}