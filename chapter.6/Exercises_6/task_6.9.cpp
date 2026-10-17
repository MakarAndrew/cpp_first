/*
Выполните упражнение 6, но измените его так, 
чтобы данные можно было получать из файла. 
Первым элементом файла должно быть количество меценатов, 
а остальная часть состоять из пар строк, в которых первая 
строка содержит имя, а вторая — сумму пожертвования. 

То есть файл должен выглядеть примерно так:
4
Sam Stone
2000
Freida Flass
100500
Tammy Tubbs
5000
Rich Raptor
55000
*/
#include <iostream>
#include <string>
#include <fstream> // для файлового ввода-вывода
#include <cstdlib> //поддержка exit()

using namespace std;
struct Patron
{
    string name;
    double donation;
};
int main()
{

    string filename = "test_6.9.txt";
    ifstream inFile;

    inFile.open(filename);
    if (!inFile.is_open()) {
        cout << "Не удалось открыть файл " << filename << endl;
        exit(EXIT_FAILURE);
    }

    int count = 0;
    inFile >> count;
    inFile >> ws;
    cout << "В файле найдено меценатов: " << count << endl;

    Patron* patrons = new Patron[count]{};

    for (int i = 0; i < count; i++){
        getline(inFile, patrons[i].name);

        inFile >> patrons[i].donation;
        inFile >> ws;
    }
    cout << endl;
    
    if (count > 0){
        cout << "Grand Patrons\n";
        int grand_count = 0;
        for (int j = 0; j < count; j++){
            if (patrons[j].donation >= 10000){
                cout << patrons[j].name << "\t" << patrons[j].donation << endl;
                grand_count++;

            }
        }
        if (grand_count == 0){
            cout << "none\n";
        }
        cout << endl;

        cout << "Patrons\n";
        int patrons_count = 0;
        for (int j = 0; j < count; j++){
            if (patrons[j].donation < 10000){
                cout << patrons[j].name << "\t" << patrons[j].donation << endl;
                patrons_count++;

            }
        }
        if (patrons_count == 0){
                cout << "none\n";
        }
    }
    else {
        cout << "none\n";
    }

    inFile.close();
    delete[] patrons;
    return 0;
}