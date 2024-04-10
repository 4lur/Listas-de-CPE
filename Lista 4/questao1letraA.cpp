/*
Lista 4
Questão 1, A
Aluno: Vinicius Magno da Silva Nascimento
Matrícula: 222005528
Programa: Calcula o fatorial
*/

#include <iostream>

using namespace std;

int main()
{
    
    int n,x =1, fatorial;

    cout<<"Digite um numero inteiro: ";
    cin>>n;
    if (n > 0)
    {
        while (n > 0)
        {

            fatorial = n*x;
            n -= 1;
        
        }
        
    }
    else
    {
        cout<<"Digite um numero inteiro nao negativo.";
        return 0;
    }
    
    cout<<fatorial;
    return 0;
}
