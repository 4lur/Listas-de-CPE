/*
Lista 4
Questão 6
Aluno: Vinícius Magno da Silva Nascimento
Matrícula: 222005528
Programa: Adinhação de 1 a 100
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));// Gera os números aleatórios

    int min = 1; // limite minimo do intervalo
    int max = 100; // limite maximo do intervalo
    int guess;
    char resposta;

    cout<<"\tJOGO DA ADIVINHACAO\n\n";

    cout<<"Pense em um numero entre 1 e 100."<<endl;
    cout<<"Responda com '<' se o numero for menor, '>' se o numero for maior ou '=' se o palpite estive certo.";
    
    // Loop para fazer as 7 perguntas
    for(int i = 0; i < 7; i++)
    {
        guess = rand() % (max - min + 1) + min;

        cout<<"O numero que voce esta pensando e "<<guess<<"?"<<endl;
        cout<<"Resposta (<, >, =)";
        cin>>resposta;
        
        // Verifica a resposta do usuário e atualiza os limites do intervalo
        if(resposta == '=')
        {
            cout<<"Adivinhei o numero!"<<endl;
            break;
        }
        else if(resposta == '<')
        {
            max = guess - 1;
        }
        else if(resposta == '>')
        {
            min = guess + 1;
        }
        else
        {
            cout<<"Resposta invalida. Responda com '<', '>' ou '='"<<endl;
            --i;//diminui 1 da contagem para fazer outra tentativa
        }
        if(guess != resposta)
        {
            cout<<"Nao consegui adivinhar o numero"<<endl;
        }
    }
    return 0;
}
