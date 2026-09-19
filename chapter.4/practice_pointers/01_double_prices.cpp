#include <iostream>

// Функция умножает каждый элемент массива на 2
// Используем арифметику указателей: *arr и arr++
void doublePrices(double* arr, int size) {
    for (int i = 0; i < size; i++) {
        *arr = *arr * 2;   // Умножаем значение по адресу
        arr++;              // Сдвигаем указатель на следующую "квартиру"
    }
}

int main() {
    using namespace std;
    double prices[3] = {10.5, 20.0, 5.5};
    
    // Вывод до изменения
    for (int i = 0; i < 3; i++) {
        cout << *(prices + i) << ", ";
    }
    cout << endl;
    
    // Вызов функции-мутатора
    doublePrices(prices, 3);
    
    // Вывод после изменения
    for (int i = 0; i < 3; i++) {
        cout << *(prices + i) << ", ";
    }
    cout << endl;
    
    return 0;
}