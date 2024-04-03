#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double cateto1, cateto2, hipotenusa;

    cout<<"Digite o valor do primeiro cateto:  ";
    cin>>cateto1;

    cout<<"Digite o valor do segundo cateto:  ";
    cin>>cateto2;

    hipotenusa = sqrt(cateto1*cateto1+cateto2*cateto2);

    cout<<"A hipotenusa e: "<<fixed<<setprecision(1)<<hipotenusa<<endl;

    return 0;
}
