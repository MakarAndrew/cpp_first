#include <iostream>

int main()
{
    std::cout << "Введи любой символ и нажми Enter: ";
    char symbol;
    
    // Читаем ОДИН символ, даже если это пробел
    std::cin.get(symbol); 
    
    std::cout << "Ты ввел символ: [" << symbol << "]" << std::endl;

    return 0;
}
