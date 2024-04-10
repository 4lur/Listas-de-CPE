/*
Lista 3,
Questão: 2
Aluno: Vinicius Magno da Silva Nascimento
Matricula: 222005528
Programa: Calcula e recomenda se deve abastecer com álcool ou gasolina
*/
#include <iostream>

using namespace std;

int main()
{
    float prec_gosolina, prec_alcool, proporcao;

    //Registra o valor da gasolina
    cout<<"Digite o valor da gasolina: ";
    cin>>prec_gosolina;

    //Registra o valor do alcool
    cout<<"Digite o valor do Alcool: ";
    cin>>prec_alcool;

    //calcula a proporção
    proporcao = prec_alcool/prec_gosolina;

    //Faz a recomandação do alcool X gasolina
    if(proporcao <= 0.7)
    {
        cout<<"E recomendado abastecer com Alcool.";
        
    }

    else
        cout<<"E recomendado abastecer gosolina.";

    return 0;
}
