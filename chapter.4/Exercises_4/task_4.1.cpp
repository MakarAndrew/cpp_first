#include <iostream>
#include <string>

int main()
{
    using namespace std;
    string firstName;
    string lastName;
    char grade;
    int age;

    cout << "What is your first name? ";
    getline(cin, firstName);

    cout << "What is your last name? ";
    getline(cin, lastName);

    cout << "What letter grade do уоu deserve? ";
    cin >> grade;

    cout << "What is your age? ";
    cin >> age;

    // уже пониженная
    grade -= 1;

    cout << "Name: " << lastName << ", " << firstName << endl;
    cout << "Grade: " << grade << endl;   // уже пониженная
    cout << "Age: " << age << endl;
    return 0;
}