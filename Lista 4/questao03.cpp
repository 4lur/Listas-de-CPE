/*
Lista 4
Questão: 3
Aluno: Vinicius Magno da Silva Nascimento
Matricula: 222005528
Programa: Triplo de Pitágoras
*/
#include <iostream>
using namespace std;

int main()
{
    cout<<"Triplo de Pitagoras:\n";

    // Loop para o lado1
    for(int lado1 = 1; lado1 <= 20; lado1++)
    {
        // Loop para o lado2
        for(int lado2 = 1; lado2 <= 20; lado2++)
        {
            // Loop para hipotenusa
            for(int hipotenusa = 1; hipotenusa <= 20; hipotenusa++)
            {
                // Verifica se é um triplo pitagórico
                if(lado1 * lado1 + lado2 * lado2 == hipotenusa * hipotenusa)
                {
                    cout<<lado1<<", "<<lado2<<", "<<hipotenusa<<endl;
                }
            }
        }
    }
    return 0;
}
