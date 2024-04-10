/*
Lista 3
Questão: 1
Aluno: Vinicius Magno da Silva Nascimento
Matricula: 222005528
Programa: Calculadora de media/consumo por Km/L
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float qntL, qntKm,kml;

    cout<<"Digite a quantidade de litros abastecidos: ";
    cin>>qntL;

    cout<<"Digite a quantidade de kilometros percorrido: ";
    cin>>qntKm;

    //calcula a media do consumo
    kml = qntKm/qntL;

    //exibe a media de consumo
    cout<<"A media de consumo do seu carro e: "<<fixed<<setprecision(1)<<kml<<" Km/L"<<endl;

    return 0;
}
