#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int num1, num2, soma, produto, diferenca, quociente;

    cout<<"Digite o primeiro numero: ";
    cin>>num1;

    cout<<"Digite o segundo numero: ";
    cin>>num2;

    soma = num1+num2;
    produto = num1*num2;
    diferenca = num1 - num2;
    quociente = num1/(num2*1.0);

    if (num1 < num2)
    {
        diferenca = num2 - num1;
    }

    cout<<"A soma dos numeros e: "<<soma<<"\nO produto dos numeros e: "<<produto<<"\nA diferenca dos numeros e: "<<diferenca<<"\nO quociente do numero e: "<<quociente;

    return 0;
}
