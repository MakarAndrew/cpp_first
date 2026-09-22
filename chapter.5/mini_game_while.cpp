#include <iostream>

int main() {
    using namespace std;
    int secret = 7;
    int guess = 0;
    
    cout << "I thought of a number from 1 to 10. Try to guess it!\n";
    
    while (guess != secret) {
        cout << "Your guess: ";
        cin >> guess;
        
        if (guess != secret) {
            cout << "Wrong, try again!\n";
        }
    }
    
    cout << "Bingo! You guessed it!\n";
    return 0;
}