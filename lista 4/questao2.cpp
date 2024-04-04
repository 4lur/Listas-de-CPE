#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float prec_gosolina, prec_alcool, proporcao;

    cout<<"Digite o valor da gasolina: ";
    cin>>prec_gosolina;

    cout<<"Digite o valor do Alcool: ";
    cin>>prec_alcool;

    proporcao = prec_alcool/prec_gosolina;

    if(proporcao <= 0.7)
    {
        cout<<"E recomendado abastecer com Alcool.";
        
    }

    else
        cout<<"E recomendado abastecer gosolina.";

    return 0;
}
