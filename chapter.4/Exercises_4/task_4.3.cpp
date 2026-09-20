/*
Напишите программу, которая запрашивает у пользователя имя, фамилию, а
затем конструирует, сохраняет и отображает третью строку, состоящую из фа­милии пользователя, 
за которой следует запятая, пробел и его имя. Используйте
массивы char и функции из заголовочного файла cstring . Пример запуска
должен выглядеть так:
Enter your first name: Flip
Enter your last name: Fleminq
Here's the information in а single string : Fleming, Flip
*/
#include <iostream>
#include <cstring>
using namespace std;

int main(){
    const int ArSize = 20;
    char firstName[ArSize];
    char lastName[ArSize];

    cout << "Enter your first name: ";
    cin.getline(firstName, ArSize);
    cout << "Enter your last name: ";
    cin.getline(lastName, ArSize);
    
    char* fullName = new char[strlen(lastName) + strlen(firstName) + 3]; //2 символа это запятая и проблеи, а третий это \0

    strcpy(fullName, lastName);
    strcat(fullName, ", ");
    strcat(fullName, firstName);
    
    cout << "Here's the information in а single string: " <<  fullName << endl;
    delete[] fullName;

    return 0;
}