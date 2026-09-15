#include <iostream>
#include <cstdlib>  // Для rand(), srand()
#include <ctime>    // Для time()

// === ТВОЯ ФУНКЦИЯ ===
int basicOp(char op, int val1, int val2) {
  switch (op)
  {
    case '+':
        return val1 + val2;

    case '-':
        return val1 - val2;

    case '*':
        return val1 * val2;

    case '/':
        if (val2 == 0){
            return 0;
        } 
        else
        {
            return val1 / val2;
        }

    default:
        return 0;
  }
}

// === НАША МИНИ-ЛАБОРАТОРИЯ (замена тестов CodeWars) ===
int main() {
    std::cout << "=== Запуск тестов ===\n\n";
    
    // Базовые тесты (как в CodeWars)
    std::cout << "Базовые тесты:\n";
    std::cout << "basicOp('+', 5, 4) = " << basicOp('+', 5, 4) << " (ожидается 9)\n";
    std::cout << "basicOp('-', 11, 8) = " << basicOp('-', 11, 8) << " (ожидается 3)\n";
    std::cout << "basicOp('*', 3, 4) = " << basicOp('*', 3, 4) << " (ожидается 12)\n";
    std::cout << "basicOp('/', 16, 4) = " << basicOp('/', 16, 4) << " (ожидается 4)\n\n";
    
    // Случайные тесты (как в CodeWars)
    std::cout << "Случайные тесты (10 сложений):\n";
    srand(time(0));  // Инициализация генератора случайных чисел
    for (int i = 0; i < 10; i++) {
        int n1 = rand() % 1000;
        int n2 = rand() % 1000;
        int result = basicOp('+', n1, n2);
        std::cout << n1 << " + " << n2 << " = " << result << "\n";
    }
    
    std::cout << "\n=== Все тесты завершены ===\n";
    
    return 0;
}