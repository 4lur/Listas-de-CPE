#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <unistd.h>
#include "bingo.h"

using namespace std;

// Construtor da classe BingoCard
BingoCard::BingoCard()
{
    card.resize(size, vector<int>(size));
    marked.resize(size, vector<bool>(size, false));
    generateCard();
}

// Gera a cartela de Bingo com números aleatórios
void BingoCard::generateCard()
{
    srand(time(0));
    vector<int> numbers(max_number);
    for (int i = 0; i < max_number; ++i)
    {
        numbers[i] = i + 1;
    }
    random_shuffle(numbers.begin(), numbers.end());

    int index = 0;
    for (int col = 0; col < size; ++col)
    {
        for (int row = 0; row < size; ++row)
        {
            card[row][col] = numbers[index++];
        }
    }
    card[size / 2][size / 2] = 0; // Espaço livre no centro da cartela
    marked[size / 2][size / 2] = true;
}

// Exibe a cartela de Bingo
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

// Marca um número na cartela
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

// Verifica se a cartela tem uma linha, coluna ou diagonal completa
bool BingoCard::checkWin()
{
    // Verifica as linhas
    for (int i = 0; i < size; ++i)
    {
        if (all_of(marked[i].begin(), marked[i].end(), [](bool v)
                   { return v; }))
            return true;
    }
    // Verifica as colunas
    for (int i = 0; i < size; ++i)
    {
        if (all_of(marked.begin(), marked.end(), [i](vector<bool> &v)
                   { return v[i]; }))
            return true;
    }
    // Verifica as diagonais
    bool diag1 = true, diag2 = true;
    for (int i = 0; i < size; ++i)
    {
        diag1 &= marked[i][i];
        diag2 &= marked[i][size - i - 1];
    }

    return diag1 || diag2;
}

// Sobrecarga do operador de comparação para cartelas
bool BingoCard::operator==(const BingoCard &other) const
{
    return this->card == other.card;
}

// Construtor da classe Player
Player::Player(const string &name) : name(name), card() {}

// Construtor da classe BingoGame
BingoGame::BingoGame(const vector<string> &playerNames) : drawsCount(0)
{
    for (const auto &name : playerNames)
    {
        players.emplace_back(name);
    }
}

// Método principal do jogo
void BingoGame::play()
{
    bool gameWon = false;

    while (!gameWon)
    {
        int number = drawNumber();
        cout << "Numero sorteado: " << number << endl;

        for (auto &player : players)
        {
            player.card.markNumber(number);
            cout << "Cartela do " << player.name << endl;
            player.card.displayCard();
            if (player.card.checkWin())
            {
                cout << "Bingo! Jogador " << player.name << " ganhou apos " << drawsCount << " numeros sorteados" << endl;
                gameWon = true;
                break;
            }
        }
        cout << "\b\b\b\b\b\b\b\b\b\b\b\bSorteando   " << flush;
        sleep(1);
        cout << "\b\b\b\b\b\b\b\b\b\b\b\bSOrteando   " << flush;
        sleep(1);
        cout << "\b\b\b\b\b\b\b\b\b\b\b\bSoRteando   " << flush;
        sleep(1);
        cout << "\b\b\b\b\b\b\b\b\b\b\b\bSorTeando   " << flush;
        sleep(1);
        cout << "\b\b\b\b\b\b\b\b\b\b\b\bSortEando   " << flush;
        sleep(1);
        cout << "\b\b\b\b\b\b\b\b\b\b\b\bSorteAndo   " << flush;
        sleep(1);
        cout << "\b\b\b\b\b\b\b\b\b\b\b\bSorteaNdo   " << flush;
        sleep(1);
        cout << "\b\b\b\b\b\b\b\b\b\b\b\bSorteanDo   " << flush;
        sleep(1);
        cout << "\b\b\b\b\b\b\b\b\b\b\b\bSorteandO   " << flush;
        sleep(1);
        cout << "\b\b\b\b\b\b\b\b\b\b\b\bSorteando.  " << flush;
        sleep(1);
        cout << "\b\b\b\b\b\b\b\b\b\b\b\bSorteando.. " << flush;
        sleep(1);
        cout << "\b\b\b\b\b\b\b\b\b\b\b\bSorteando..." << flush;
        sleep(1);
        cout << "\n                                              Ja Foram " << drawsCount << " Numeros sorteados!" << endl;
    }
}

// Sorteia um número aleatório que ainda não foi sorteado
int BingoGame::drawNumber()
{
    int number;
    do
    {
        number = rand() % max_number + 1;
    } while (find(numbersDrawn.begin(), numbersDrawn.end(), number) != numbersDrawn.end());
    numbersDrawn.push_back(number);
    drawsCount++;
    return number;
}

//
BingoCard BingoGame::generateUniqueCard()
{
    BingoCard newCard;
    // Gera uma nova cartela até que seja diferente de todas as cartelas existentes
    do
    {
        newCard.generateCard();
    } while (any_of(players.begin(), players.end(), [&newCard](const Player &player)
                    { return player.card == newCard; }));

    return newCard;
};
