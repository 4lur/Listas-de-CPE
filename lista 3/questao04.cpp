/*
Lista 3
Questão: 4
Aluno: Vinicius Magno da Silva Nascimento
Matricula: 222005528
Programa: Mostra o número binário correspondente em decimal
*/

#include <iostream>

using namespace std;

int main()
{
    int num_binario, digito, posicao = 0, num_decimal = 0;

    cout<<"Digite um numero binario: ";
    cin>>num_binario;

    // Converte o numero binario para decimal

    while (num_binario > 0)
    {
        digito = num_binario % 10; // Obtém o ultimo digito do número binário
        num_binario /= 10;  // Remove o últmo digito do número binário
        num_decimal += digito * (1 << posicao); // Calcula o valor decimal do digito
        posicao++; // Incrementa a posição do dígito binário
    }

    cout<<"O numero decimal correspondente e: "<<num_decimal<<endl;

    return 0;
    
}
