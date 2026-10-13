/*
6. Постройте программу, которая отслеживает пожертвования 
в Общество Защиты Влиятельных Лиц. Она должна запрашивать 
у пользователя количество меценатов, а затем приглашать 
вводить их имена и суммы пожертвований от каждого. 
Информация должна сохраняться в динамически выделяемом 
массиве структур. Каждая структура должна иметь два члена: 
символьный массив (или объект string) для хранения имени и 
переменную-член типа double — для хранения суммы пожертвования. 
После чтения всех данных программа должна отображать имена и 
суммы пожертвований тех, кто не пожалел $10 000 и более. 
Этот список должен быть озаглавлен меткой "Grand Patrons". 
После этого программа должна выдать список остальных 
жертвователей. Он должен быть озаглавлен "Patrons". 
Если в одной из двух категорий не окажется никого, 
программа должна напечатать "none". Помимо отображения 
двух категорий, никакой другой сортировки делать не нужно.
*/
#include <iostream>
#include <string>
using namespace std;
struct Patron
{
    string name;
    double donation;
};
int main()
{
    cout << "Сколько человек сделало пожертвований: ";
    int n;
    cin >> n;
    cin.get();

    Patron* patrons = new Patron[n]{};

    for (int i = 0; i < n; i++){
        cout << "Введите ваше имя и фамилию: ";
        getline(cin, (patrons+i)->name);

        cout << "Введите сумму пожертвований: ";
        cin >> (patrons+i)->donation;
        cin.get();
    }
    cout << endl;
    
    if (n > 0){
        cout << "Grand Patrons\n";
        int grand_count = 0;
        for (int j = 0; j < n; j++){
            if ((patrons+j)->donation >= 10000){
                cout << (patrons+j)->name << "\t" << (patrons+j)->donation << endl;
                grand_count++;

            }
        }
        if (grand_count == 0){
            cout << "none\n";
        }
        cout << endl;

        cout << "Patrons\n";
        int patrons_count = 0;
        for (int j = 0; j < n; j++){
            if ((patrons+j)->donation < 10000){
                cout << (patrons+j)->name << "\t" << (patrons+j)->donation << endl;
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
    delete[] patrons;
    return 0;
}