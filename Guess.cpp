
#include <iostream>
#include <cstdlib>  
#include <ctime>    

using namespace std;

int main() {
    
    srand(time(0));

    
    int secretNumber = rand() % 100 + 1;

    int guess;

    cout << "Welcome to the Guessing Game!\n";
    cout << "I have picked a number between 1 and 100.\n";

   
    while (true) {
        cout << " Enter your guess: ";
        cin >> guess;

        if (guess < secretNumber) {
            cout << " Too low. Try again.\n";
        } else if (guess > secretNumber) {
            cout << "Too high. Try again.\n";
        } else {
            cout << " Correct! You guessed it!\n";
            break;
        }
    }

    return 0;
}