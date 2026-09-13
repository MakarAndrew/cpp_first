// Дана строка. Выведите в консоль последний символ строки. 

#include <iostream>
int main()
{
    using namespace std;
    string text = "Hello word!";

    cout << "Последний символ чрез text.back(): " 
        << text.back() << endl;

    cout << "Предпоследний символ чрез text[text.size() - 2]: " 
        << text[text.size() - 2] << endl;
    return 0;
} 