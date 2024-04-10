/*
Lista 3
Questão: 8
Aluno: Vinicius Magno da Silva Nascimento
Matricula: 222005528
Programa: Soma/Subtração/Mutiplicação/Divisão conforme a escolha da usuário.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double num1, num2, resultado;
    char operador;

    // Leitura dos números reais
    cout<<"Digite o primeiro numero: ";
    cin>>num1;

    cout<<"Digite o segundo numero: ";
    cin>>num2;

    cout<<"Digite um dos operadores +, -, *, /: ";
    cin>>operador;

    // Leitura do operador
    switch (operador)
    {
    case '+':
        resultado = num1 + num2;
        cout<<fixed<<setprecision(2)<<"Resultado: "<<num1<<" + "<<num2<<" = "<<resultado<<endl;
        break;

    case '-':
        resultado = num1 - num2;
        cout<<fixed<<setprecision(2)<<"Resultado: "<<num1<<" - "<<num2<<" = "<<resultado<<endl;
        break;
    
    case '*':
        resultado = num1 * num2;
        cout<<fixed<<setprecision(2)<<"Resultado: "<<num1<<" * "<<num2<<" = "<<resultado<<endl;
        break;
    
    case '/':
        if(num2 != 0)
        {
            resultado = num1 / num2;
            cout<<fixed<<setprecision(2)<<"Resultado: "<<num1<<" / "<<num2<<" = "<<resultado<<endl;
        }
        else
        {
            cout<<"ERRO! Divisao por 0 nao e permitida";
        }
        break;
        
    default:
        cout<<"Operador invalido.";
        break;
    }

    return 0;
}
