#include <iostream>
using namespace std;

int main() {

    int secretNum = 7;
    int guess;
    int guessCount = 0;
    int guessLimit = 3;
    bool outOfGuesses = false;


    while(secretNum != guess && !outOfGuesses) {
        if (guessCount < guessLimit) {
            cout << "Enter guess: ";
            cin >> guess;
            guessCount ++;
        } else {
            outOfGuesses = true;
        }
    }

    if (outOfGuesses) {
        cout << "You lose, because you are out of guesses!";
    } else {
    cout << "You guessed the right number! Well done.";
    }

    return 0;
}