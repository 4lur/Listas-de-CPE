/*
Lista 4
Questão: 1, Letra A
Aluno: Vinicius Magno da Silva Nascimento
Matricula: 222005528
Programa: Calcula fatorial
*/
#include <iostream>
using namespace std;

int main()
{
    int n;

    cout<<"Digite um numero inteiro nao negativo: ";
    cin>>n;

    if(n<0)
    {
        cout<<"O numero deve ser nao negativo."<<endl;
        return 1;
    }

    unsigned long long fatorial = 1; // Permite um intervalo maior de fatorias

    // Loop para calcular o fatorial
    for(int i = 1; i <= n; i++)
    {
        fatorial *= i;
    }

    cout<<"O fatorial de "<<n<<" e: "<<fatorial<<endl;

    return 0;
}
