#include <iostream>

int main() {
    using namespace std;
    
    int age = 25;
    double salary = 50000.50;
    char grade = 'A';
    
    // Создаём указатели на каждую переменную
    int* agePtr = &age;
    double* salaryPtr = &salary;
    char* gradePtr = &grade;
    
    // Изменяем значения через указатели
    *agePtr += 5;           // Возраст +5
    *salaryPtr *= 1.1;      // Зарплата +10%
    *gradePtr += 1;         // 'A' -> 'B' (ASCII-магия!)
    
    // Выводим через указатели
    cout << "Age: " << *agePtr << endl;
    cout << "Salary: " << *salaryPtr << endl;
    cout << "Grade: " << *gradePtr << endl;
    
    return 0;
}