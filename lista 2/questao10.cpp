/*
Lista 2 de cpe
Questao: 10
Aluno: Vinicius Magno da Silva Nascimento
Matricula: 222005528
Programa: Contagem e Criptografia de Vogais em uma String
*/

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string input;
    cout<<"Digite uma string com 5 caracteres: ";
    cin>>input;

    if(input.length() != 5)
    {
        cout<<"A string deve conter exatamente 5 caracteres.\n";
        return 1;
    }

    string vowels = "aeiou";

    //Contagem de vogais na string
    int count_a = count(input.begin(), input.end(), 'a');
    int count_e = count(input.begin(), input.end(), 'e');
    int count_i = count(input.begin(), input.end(), 'i');
    int count_o = count(input.begin(), input.end(), 'o');
    int count_u = count(input.begin(), input.end(), 'u');

    //Exibir contagem de vogais

    cout<<"Quantidade de vogais na string:\n";
    cout<<"a: "<<count_a<<endl;
    cout<<"e: "<<count_e<<endl;
    cout<<"i: "<<count_i<<endl;
    cout<<"o: "<<count_o<<endl;
    cout<<"u: "<<count_u<<endl;

    //criptografar a string
    replace(input.begin(), input.end(), 'a', 'i');
    replace(input.begin(), input.end(), 'e', 'o');
    replace(input.begin(), input.end(), 'i', 'u');

    //Exibir a string criptografada
    cout<<"String criptografada: "<<input<<endl;

    return 0;
}
