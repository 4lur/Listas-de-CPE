#ifndef BINGO_H
#define BINGO_H

#include <vector>

using namespace std;

const int size = 5;
const int max_number = 75;

class BingoCard {
private:
    vector<vector<int>> card;
    vector<vector<bool>> marked;

public:
    BingoCard();
    void generateCard();
    void displayCard();
    bool markNumber(int number);
    bool checkWin();
};

class BingoGame {
private:
    BingoCard card;
    vector<int> numbersDrawn;

public:
    BingoGame();
    void play();

private:
    int drawNumber();
};

#endif // BINGO_H
