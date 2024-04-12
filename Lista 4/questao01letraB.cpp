/*
Lista 4
Questão: 01, Letra B
Aluno: Vinicius Magno da Silva Nascimento
Matricula: 222005528
Programa: Calcula o valor constante e^x
*/

#include <iostream>
#include <cmath> // Para a função pow()
using namespace std;

int main() {
    double x; // Valor de x
    int n = 10; // Número de termos
    double ex = 1.0; // Valor inicial de e^x
    double termo = 1.0; // Valor inicial do termo atual

    cout << "Digite o valor de x: ";
    cin >> x;

    // Loop para somar os termos
    for (int i = 1; i <= n; ++i) {
        termo *= x / i; // Calcula o próximo termo
        ex += termo; // Adiciona o termo ao valor de e^x
    }

    cout << "O valor aproximado de e^x com " << n << " termos e: " << ex << endl;

    return 0;
}
