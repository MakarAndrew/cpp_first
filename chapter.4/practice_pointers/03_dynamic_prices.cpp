#include <iostream>

int main() {
    using namespace std;
    
    int n;
    cout << "Сколько цен вы хотите ввести? ";
    cin >> n;
    
    // Выделяем динамический массив
    double* prices = new double[n];
    
    // Заполняем
    for (int j = 0; j < n; j++) {
        cout << "Введи цену: ";
        cin >> prices[j];
    }
    
    // Выводим
    for (int i = 0; i < n; i++) {
        cout << prices[i] << ", ";
    }
    cout << endl;
    
    // ВАЖНО: освобождаем память!
    delete[] prices;
    
    return 0;
}