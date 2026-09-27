// испольоварие оператора if else
#include <iostream>
int main()
{
    char ch;
    std::cout << "Type, and I shall repeat.\n";
    std::cin.get(ch);

    while (ch != '.')
    {
        if (ch == '\n'){
            std::cout << ch;
        }
        else {
            std::cout << ++ch; //ch + 1 в выводу будут цифры
        }
        std::cin.get(ch);
    }
    std::cout <<"\nPlease excuse the slight confusion.\n";
    return 0;
}