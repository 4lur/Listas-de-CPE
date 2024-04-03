#include <iostream>

using namespace std;

int main()
{
    float qntL, qntKm,kml;

    cout<<"Digite a quantidade de litros: ";
    cin>>qntL;

    cout<<"Digite o kilometros percorrido: ";
    cin>>qntKm;

    kml = qntKm/qntL;

    cout<<"A media de consumo do seu carro e: "<<kml<<" Km/L"<<endl;

    return 0;
}
