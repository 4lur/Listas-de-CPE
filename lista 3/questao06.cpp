/*
Lista 3
Questão: 6
Aluno: Vinicius Magno da Silva Nascimento
Matricula: 222005528
Programa: Calcula os 3 lados de um triangulo e diz se é um Equilátero, Isósceles ou Escaleno.
*/

#include <iostream>

using namespace std;

// Função que recebe os comprimentos dos três lados de um triângulo.
string tipoTriangulo(float a, float b, float c)
{
    if (a == b && b == c)
    {
        return "Equilatero.";
    }
    else if (a == b || a == c || b == c)
    {
        return "Isosceles.";
    }
    else
    {
        return "Escaleno.";    
    }
}

int main()
{
    float a, b, c;
    cout<<"Digite o comprimento do primeiro lado: ";
    cin>>a;

    cout<<"Digite o comprimento do segundo lado: ";
    cin>>b;
    
    cout<<"Digite o comprimento do terceiro lado: ";
    cin>>c;

    string tipo = tipoTriangulo(a, b, c);
    cout<<"O triangulo e "<<tipo<<endl;

    return 0;
}
