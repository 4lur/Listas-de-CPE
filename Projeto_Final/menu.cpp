#include <iostream>
#include "bingo.h"

using namespace std;

// Função que exibe o menu
void showMenu()
{
    cout << "===== Menu =====" << endl;
    cout << "1. Jogar" << endl;
    cout << "2. sair" << endl;
    cout << "================" << endl;
    cout << "Escolha uma opcao: ";
}

int main()
{
    int choice;
    bool sair = false;

    while (!sair)
    {
        showMenu();    // Exibe o menu
        cin >> choice; // Lê a escolha do usuário

        switch (choice)
        {
        case 1:
        {
            BingoGame game; // Cria uma instância do jogo
            game.play();    // Inicia o jogo
        }
        break;
        case 2:
            cout << "Saindo do jogo!" << endl;
            sair = true; // Seta a flag de saída para true
            break;
        default:
            cout << "Opcao invalida, tente novamente: " << endl;
        }
    }

    return 0;
}
