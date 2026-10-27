// определение, протопировнаие и вызов функции
#include <iostream>

void simple(); //прототоип функции
int main(){
    using namespace std;
    cout << "main() will call the simple() function:\n";
    simple(); //вызов функции
    cout << "main() is finished with the simple() function.\n";
    // cin.get();
    return 0;
}
//определение функции
void simple(){
    using namespace std;
    cout << "I am but a simple function.\n";
}