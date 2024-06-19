#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <unistd.h> // sleep
#include "bingo.h"

using namespace std;

// Construtor da classe BingoCard
BingoCard::BingoCard()
{
    // Redimesiona a matriz da cartela e da marcação
    card.resize(size, vector<int>(size));
    marked.resize(size, vector<bool>(size, false));
    generateCard(); // gera uma nova cartela
}

// Gera a cartela de Bingo com números aleatórios
void BingoCard::generateCard()
{
    srand(time(0)); // Inicializa o gerador de números aleatórios
    for (int col = 0; col < size; ++col)
    {
        vector<int> numbers;
        for (int i = 1; i <= 15; ++i)
        {
            numbers.push_back(i + col * 15);
        }
        random_shuffle(numbers.begin(), numbers.end()); // Embaralha os números
        for (int row = 0; row < size; ++row)
        {
            card[row][col] = numbers[row];
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

// Construtor da classe BingoGame
BingoGame::BingoGame() : card(), drawCount(0) {}

// Método principal do jogo
void BingoGame::play()
{
    while (!card.checkWin())
    {
        int number = drawNumber();
        cout << "\nNumero escolhido: " << number << endl;
        card.markNumber(number);
        card.displayCard();

        // Delay para sortear um número
        for (int i = 0; i < 1; ++i)
        {
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
        }
    }
    cout << "\nBingoo!, voce ganou apos: " << drawCount << " Numeros sortidos!" << endl;
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
    drawCount++;
    return number;
}
