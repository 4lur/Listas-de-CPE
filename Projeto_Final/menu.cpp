#include <iostream>
#include "bingo.h"

using namespace std;

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
        showMenu();
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            BingoGame game;
            game.play();
        }
        break;
        case 2:
            cout << "Saindo do jogo!" << endl;
            sair = true;
            break;
        default:
            cout << "Opcao invalida, tente novamente: " << endl;
        }
    }

    return 0;
}
