#include "Game.h"
#include <random>

using namespace std;

void NumberGuessingGame::generateNumber() {
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> dist(1, 100);
    targetNumber = dist(gen);
}

NumberGuessingGame::NumberGuessingGame() : attempts(0) {
    generateNumber();
}

void NumberGuessingGame::play() {
    int guess;
    cout << "Welcome to the guessing game! Try to guess a number (1-100). \n";
    // cout << "the random number is: " << targetNumber << endl;

    while (true) {
        cout << "enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess > targetNumber) {
            cout << "too high! \n";
        } else if (guess < targetNumber) {
            cout << "too low! \n";
        } else {
            cout << "Congratulations! You won! in " << attempts << " attempts. \n";
            break;
        }
    }
}