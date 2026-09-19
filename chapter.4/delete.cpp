#include <iostream>
#include <cstring>
using namespace std;
char* getname(void);//прототип функции
int main()
{
    char* name;//создаем указатель без хранилища
    name = getname();//присваиваем name адрес строки
    cout << name << " at " << (int *) name << endl;
    delete [] name;//освобождаем память

    name = getname();//повторно испольузем освобожденную память
    cout << name << " at " << (int *) name << endl;
    delete [] name;//снова освобождаем память
    return 0;
}

char* getname() // возвращает указатель на новую строку
{
    char temp[80];//временное хранилище
    cout << "Enter last anme: ";//ввод фамилии
    cin >> temp;
    char* pn = new char[strlen(temp) + 1];
    strcpy(pn, temp);//копирование строки в меншее пространство
    return pn;//по завершению функции temp теряется
}