/*
Lista 2 de cpe
Questao: 09
Aluno: Vinicius Magno da Silva Nascimento
Matricula: 222005528
Programa para calcula o valor do aluguel de um carro por KM
*/
#include <iostream>
#include<iomanip>

using namespace std;

int main()
{
    float distanciaKm, valor50 = 1.75, valor100 = 1.65, valor150 = 1.50, mediaKm, valorxkm;
    
    //lê a distancia percorrida em Km.
    cout<<"Digite a distancia em quilometros(Km): ";
    cin>>distanciaKm;

    cout<<"Voce percorreu "<<distanciaKm<<" KM"<<endl;

    //Calcula o valor do aluguel caso tenho percorrido menos de 50 KM
    if(distanciaKm <= 50)
    {
        mediaKm = distanciaKm*valor50;
        valorxkm = distanciaKm/valor50;

        cout<<"O valor a ser pago e: R$"<<mediaKm<<"\nO consumo medio por km e: "<<fixed<<setprecision(1)<<valorxkm<<endl;

        return 0;
    }
    //calcula o valor do aluguel caso tenha percorrido 100 a 150 KM
    else if(distanciaKm >= 100 || distanciaKm < 150 )
    {
        mediaKm = valor100 * distanciaKm;
        valorxkm = distanciaKm/valor100;

        cout<<"O valor a ser pago e: R$"<<mediaKm<<"\nO consumo medio por km e: R$"<<fixed<<setprecision(1)<<valorxkm<<endl;

        return 0;
    }
    //Calcula o valor do alguel caso tenha percorrido 150 ou mais KM
    else if(distanciaKm >= 150)
    {
        mediaKm = valor150 * distanciaKm;
        valorxkm = distanciaKm/valor150;

        cout<<"O valor a ser pago e: R$"<<mediaKm<<"\nO consumo medio por km e: R$"<<fixed<<setprecision(1)<<valorxkm<<endl;
        
        return 0;
    }

    return 0;
}
