/*
Lista 3
Questão: 7
Aluno: Vinicius Magno da Silva Nascimento
Matricula: 222005528
Programa: Validador de senha.
*/

#include <iostream>
using namespace std;

int main()
{
    int input, senha = 1234;

    cout<<"Digite a senha: ";
    cin>>input;

    if (input == senha)
    {
        cout<<"ACESSO PERMITIDO";
        return 0;
    }
    else
    {

        while (input != senha)
        {
            cout<<"ACESSO NEGADO\n";

            cout<<"Digite a senha novamente: ";
            cin>>input;
      
            if (input == senha)
            {
                cout<<"ACESSO PERMITIDO";
            }
        }
    }
    
    return 0;
}
