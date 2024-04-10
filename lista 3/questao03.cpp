/*
Lista 3
Questão: 3
Aluno: Vinicius Magno da Silva Nascimento
Matricula: 222005528
Programa: Diz se o numero é ou não é um palíndromo
*/

#include <iostream>

using namespace std;

int main()
{
    int num, digito1, digito2, digito4, digito5;

    cout<<"Digite um numero inteiro de cinco digitos: ";
    cin>>num;

    // Separa os digitos do numero
    digito1 = num / 10000;
    digito2 = (num / 1000) % 10;
    digito4 = (num / 10) % 10;
    digito5 = num % 10;

    // Verifica se é um palíndromo
    if (digito1 == digito5 && digito2 == digito4)
    {
        cout<<"O numero "<<num<<" e um palindromo."<<endl;
        return 0;
    }
    else
    {
        cout<<"O numero "<<num<<" nao e um palindromo."<<endl;
        return 1;
    }
    return 0;
}
