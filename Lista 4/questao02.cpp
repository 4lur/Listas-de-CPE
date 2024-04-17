/*
Lista 4
Questão 6
Aluno: Vinícius Magno da Silva Nascimento
Matrícula: 222005528
Programa: Adinhação de 1 a 100
*/
#include <iostream>

using namespace std;

int main() {
    // Padrão 1
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            cout << '*';
        }
        cout << '\n';
    }
    
    cout << '\n'; // Linha em branco
    
    // Padrão 2
    for (int i = 5; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << '*';
        }
        cout << '\n';
    }
    
    cout << '\n'; // Linha em branco
    
    // Padrão 3
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5 - i; j++) {
            cout << ' ';
        }
        for (int k = 1; k <= i; k++) {
            cout << '*';
        }
        cout << '\n';
    }
    
    cout << '\n'; // Linha em branco
    
    // Padrão 4
    for (int i = 5; i >= 1; i--) {
        for (int j = 1; j <= 5 - i; j++) {
            cout << ' ';
        }
        for (int k = 1; k <= i; k++) {
            cout << '*';
        }
        cout << '\n';
    }
    
    return 0;
}
