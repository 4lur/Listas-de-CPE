#include <iostream>

using namespace std;

int main()
{
    int num1, num2;

    cout<<"Digite o primeiro numero: ";
    cin>>num1;

    cout<<"Digite o segundo numero: ";
    cin>>num2;

    if ((num1 % num2)==0)
    {
        cout<<"Sao multiplos.";
    }

    else
        cout<<"Nao sao multiplos.";

    return 0;

}
