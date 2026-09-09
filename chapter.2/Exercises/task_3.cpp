// 3. Напишите программу на С++, которая использует три определяемых пользова­
// телем функции (включая main ()) и генерирует следующий вывод:
// Three blind mice
// Three blind mice
// See how they run
// See how they run
// Одна функция, вызываемая два раза, должна генерировать первые две строки ,
// а другая, также вызываемая два раза - оставшиеся строки.


// НУ тут я запупил жестко я сам почти написал 1 варинт, но жестко напутал с 
// 1. Путаница между пространством имен и типом данных
// 2. Передача в функцию "мусора" (необъявленных переменных)

// #include <iostream>

// std::string firstd();
// std::string second();

// int main()
// {
//     using namespace std;
//     cout << firstd() << endl;
//     cout << firstd() << endl;
//     cout << second() << endl;
//     cout << second() << endl;
//     return 0;
// }

// std::string firstd()
// {
//     using namespace std;
//     string a = "Three blind mice";
//     return a;
    
// }
// std::string second()
// {
//     using namespace std;
//     string b = "See how they run";
//     return b;
// }

#include <iostream>

void firstd()
{
    using namespace std;
    cout << "Three blind mice" << endl;
}
void second()
{
    using namespace std;
    cout << "See how they run" << endl;
}

int main()
{
    using namespace std;
    firstd();
    firstd();
    second();
    second();
    return 0;
}
