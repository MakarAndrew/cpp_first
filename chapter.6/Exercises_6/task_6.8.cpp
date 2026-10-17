/*
Напишите программу, которая открывает текстовый файл,
читает его символ за символом до самого конца и 
сообщает количество символов в файле.
*/

#include <iostream>
#include <fstream> // для файлового ввода-вывода
#include <cstdlib> //поддержка exit()
#include <string>

using namespace std;

int main()
{
    string filename = "test_6.8.txt";
    ifstream inFile; //обект для обработки файлового ввода
    cout << "Enter: " << filename << endl;
    inFile.open(filename);
    // if (!inFile.is_open()){
    //     cout << "Could not open the file " << filename << endl;
    //     cout << "Program terminating.\n";
    //     exit(EXIT_FAILURE);
    // }
    int count_ch = 0;
    char ch;
    cout << "Содержимое файла " << filename << ": ";
    while (inFile.get(ch))
    {
        count_ch++;
        cout << ch;
    }
    cout << endl;
    if (count_ch == 0){
        cout << "No data processed.\n";
    } else {
        cout << count_ch << " количество символов в файле.\n";
    }
    inFile.close();

    return 0;
}