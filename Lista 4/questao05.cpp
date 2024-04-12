/*
Lista 4
Questão: 5
Aluno: Vinicius Magno da Silva Nascimento
Matricula: 222005528
Programa:Impressão de gráficos de barras 
*/
#include <iostream>
using namespace std;

int main ()
{
    int num;

    for(int i = 0; i <= 5; i++)
    {
        cout<<"\nDigite 5 numeros entre 1 e 30: ";
        cin>>num;  
        
        while (num < 1 || num > 30)
        {
            cout<<"Numero invalido, por favor digite um numero entre 1 e 30: ";
            cin>> num;
        }
        
        cout<<"Grafico de barras para o numero: "<<num<<endl;
        for(int j = 0; j < num; j++)
        {
            cout<<'*';
        }
    }

    return 0;
}
