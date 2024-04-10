/*
Lista 3
Questão: 5
Aluno: Vinicius Magno da Silva Nascimento
Matricula: 222005528
Programa: Diz se o caractere é uma vogal ou não. 
*/

#include <iostream>

using namespace std;

int main()
{
    char caractere;

    cout<<"Digite um caractere: ";
    cin>> caractere;

    switch (caractere)
    {
    case 'a':
    case 'A':
    case 'e':
    case 'E':
    case 'i':
    case 'I':
    case 'o':
    case 'O':
    case 'u':
    case 'U':
        cout<<caractere<<" e uma vogal."<<endl;
        break;
    
    default:
        cout<<caractere<<" nao e uma vogal"<<endl;
        break;
    }
    return 0;
}
