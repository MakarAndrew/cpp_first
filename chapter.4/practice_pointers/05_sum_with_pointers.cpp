#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Размер массива: ";
    cin >> n;
    
    int* arr = new int[n];
    
    // Заполняем числами от 1 до n
    for (int i = 0; i < n; i++) {
        *(arr + i) = i + 1;
    }
    
    // Считаем сумму через арифметику указателей
    int sum = 0;
    for (int j = 0; j < n; j++) {
        sum += *(arr + j);
    }
    
    cout << "Сумма: " << sum << endl;
    
    // Освобождаем память
    delete[] arr;
    
    return 0;
}