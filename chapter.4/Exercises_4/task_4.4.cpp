/*
4 задание
Напишите программу, которая приглашает пользователя ввести его имя и фа­милию,
а затем построит, сохранит и отобразит третью строку, состоящую
из фамилии, за которой следует запятая, пробел и имя. Используйте объекты
string и методы из заголовочного файла string . Пример запуска должен вы­
глядеть так:
Enter your first name : Flip
Enter your last name : Fleminq
Here's the information in а single string : Fleming , Flip
*/
#include <iostream>
#include <string>
using namespace std;

int main(){
    string firstName;
    string lastName;

    cout << "Enter your first name: ";
    getline(cin, firstName);
    cout << "Enter your last name: ";
    getline(cin, lastName);
    
    string fullName = lastName + ", " + firstName;
    
    cout << "Here's the information in а single string: " <<  fullName << endl;
    return 0;
}