#include <iostream>

int main()
{
    // Обычный способ (используем пульт <<)
    std::cout << "Обычный способ: Привет!" << std::endl;

    // Эксперимент: используем суперспособность .put()
    std::cout << "Суперспособность: ";
    std::cout.put('H');
    std::cout.put('i');
    std::cout.put('!');
    std::cout.put('\n'); // \n внутри put тоже работает как перенос строки!

    return 0;
}