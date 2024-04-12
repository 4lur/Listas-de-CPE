/*
Lista 4
Questão: 1, Letra B
Aluno: Vinicius Magno da Silva Nascimento
Matricula: 222005528
Programa: Calcula a constante e
*/

#include <iostream>
using namespace std;

int main() {
    int n = 10; // Número de termos
    double e = 1.0; // Valor inicial de e
    int fatorial = 1; // Valor inicial do fatorial

    // Loop para somar os termos
    for (int i = 1; i <= n; ++i) {
        fatorial *= i; // Calcula o fatorial
        e += 1.0 / fatorial; // Adiciona o termo ao valor de e
    }

    cout << "O valor aproximado de e com " << n << " termos e: " << e << endl;

    return 0;
}
