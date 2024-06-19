#ifndef BINGO_H
#define BINGO_H

#include <vector>

using namespace std;

// Define constantes para o tamanho da cartela e número máximo sorteável
const int size = 5;
const int max_number = 75;

// Classe BingoCard representa uma cartela de bingo
class BingoCard {
private:
    vector<vector<int>> card;     // Matriz para armazenar os números da cartela
    vector<vector<bool>> marked; // Matriz para armazenar os números marcados

public:
    BingoCard();                   // Contrutor
    void generateCard();           // Gera a carrtela com números aleatórios
    void displayCard();            // Exibe a cartela
    bool markNumber(int number);   // Marca um número na cartela
    bool checkWin();               // Verifica se há uma vitoria
};

// Classe BingoGame representa o jogo
class BingoGame {
private:
    BingoCard card;             // instância de uma cartela de bingo
    vector<int> numbersDrawn;   // Vetor para armazenar os números sorteados
    int drawCount;              // Cotador de números sorteados

public:
    BingoGame(); // Construtor
    void play(); // Método principal para jogar

private:
    int drawNumber(); // Sorteia um número
};

#endif // BINGO_H
