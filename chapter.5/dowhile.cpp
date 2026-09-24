//цикл с проверкой на выходе
#include <iostream>
int main()
{
    using namespace std;
    int n;
    cout << "Enter number in the range 1-10 to fine ";
    cout << "my favorite number\n";
    do
    {
        cin >> n;
    } while (n != 7);
    cout << "Yes, 7 in my facorite.\n";
    return 0;
    
}