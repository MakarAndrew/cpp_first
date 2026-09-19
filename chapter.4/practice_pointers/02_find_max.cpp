#include <iostream>

// Функция возвращает УКАЗАТЕЛЬ на максимальный элемент
double* findMax(double* arr, int size) {
    double* maxPtr = arr;   // Пока максимум — первый элемент
    
    for (int i = 0; i < size; i++) {
        if (*maxPtr < *(arr + i)) {
            maxPtr = arr + i;   // Перенаводим "бинокль" на новый максимум
        }
    }
    return maxPtr;
}

int main() {
    using namespace std;
    double prices[5] = {10.5, 50.0, 20.0, 5.5, 30.0};
    
    double* maxPtr = findMax(prices, 5);
    
    // Значение максимума
    cout << "Максимум: " << *maxPtr << endl;
    
    // Индекс максимума (через разность указателей!)
    cout << "Индекс: " << maxPtr - prices << endl;
    
    return 0;
}