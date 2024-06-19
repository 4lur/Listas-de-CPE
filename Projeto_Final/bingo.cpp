#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <unistd.h> // sleep
#include "bingo.h"

using namespace std;

BingoCard::BingoCard()
{
    card.resize(size, vector<int>(size));
    marked.resize(size, vector<bool>(size, false));
    generateCard();
}

void BingoCard::generateCard()
{
    srand(time(0));
    for (int col = 0; col < size; ++col)
    {
        vector<int> numbers;
        for (int i = 1; i <= 15; ++i)
        {
            numbers.push_back(i + col * 15);
        }
        random_shuffle(numbers.begin(), numbers.end());
        for (int row = 0; row < size; ++row)
        {
            card[row][col] = numbers[row];
        }
    }
    card[size / 2][size / 2] = 0; // Espaço no meio
    marked[size / 2][size / 2] = true;
}

void BingoCard::displayCard()
{
    cout << "B   I   N   G   O\n";
    for (int i = 0; i < size; ++i)
    {
        for (int j = 0; j < size; ++j)
        {
            if (marked[i][j])
                cout << "[X]";
            else
                cout << card[i][j];
            cout << "\t";
        }
        cout << "\n";
    }
}

bool BingoCard::markNumber(int number)
{
    for (int i = 0; i < size; ++i)
    {
        for (int j = 0; j < size; ++j)
        {
            if (card[i][j] == number)
            {
                marked[i][j] = true;
                return true;
            }
        }
    }
    return false;
}

bool BingoCard::checkWin()
{
    for (int i = 0; i < size; ++i)
    {
        if (all_of(marked[i].begin(), marked[i].end(), [](bool v)
                   { return v; }))
            return true;
        if (all_of(marked.begin(), marked.end(), [i](vector<bool> &v)
                   { return v[i]; }))
            return true;
    }

    bool diag1 = true, diag2 = true;
    for (int i = 0; i < size; ++i)
    {
        diag1 &= marked[i][i];
        diag2 &= marked[i][size - i - 1];
    }

    return diag1 || diag2;
}

BingoGame::BingoGame() : card() {}

void BingoGame::play()
{
    while (!card.checkWin())
    {
        int number = drawNumber();
        cout << "Numero escolhido: " << number << endl;
        card.markNumber(number);
        card.displayCard();
        cout << '-' << flush;
        for (int i = 0; i < 1; ++i)
        {
            sleep(1);
            cout << "\b\\" << flush;
            sleep(1);
            cout << "\b|" << flush;
            sleep(1);
            cout << "\b/" << flush;
            sleep(1);
            cout << "\b-" << flush;
        }
    }
    cout << "Bingoo!" << endl;
}

int BingoGame::drawNumber()
{
    int number;
    do
    {
        number = rand() % max_number + 1;
    } while (find(numbersDrawn.begin(), numbersDrawn.end(), number) != numbersDrawn.end());
    numbersDrawn.push_back(number);
    return number;
}
