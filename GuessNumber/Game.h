#ifndef GAME_H
#define GAME_H 
// define the game class variables / data and methods / functions
// this toy example comes from ChatGPT
#include <iostream> 

class NumberGuessingGame {
private:
    int targetNumber;
    int attempts;
    void generateNumber();

public:
    NumberGuessingGame();
    void play();

};

#endif 