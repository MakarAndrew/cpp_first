// 2. Напишите программу на С++, которая выдает запрос на ввод расстояния в фарлон­
// гах и преобразует его в ярды (Один фарлонг равен 220 ярдам, или 201 168 м.)

#include <iostream>
int dlinna(int);
int main()
{
    int farlon = dlinna(farlon);
    
    using namespace std;
    cout << farlon << " фарлона = " << farlon * 220 << " ярдов и "
        << farlon * 201168 << " метров" << endl;
    return 0;
}

int dlinna(int farlon)
{
    using namespace std;
    cout << "Введи расстояни в фарлон: ";
    cin >> farlon;
    return farlon;
}