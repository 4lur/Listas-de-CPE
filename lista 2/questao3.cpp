#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double pi = 3.14159;
    float area, diametro, raio;
    
    cout<<"Digite o valor do raio do circulo: ";
    cin>>raio;

    diametro = raio*2;
    area = pi*raio*raio;
    
    cout<<"O diametro: "<<diametro<<"\n A area do circulo: "<<fixed<<setprecision(1)<<area<<endl;

    return 0;
}
