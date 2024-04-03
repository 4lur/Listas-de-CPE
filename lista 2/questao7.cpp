#include <iostream>

using namespace std;

int main()
{
    int num;

    cout<<"Digite um numero inteiro: ";
    cin>>num;

    if (num <= 1)
    {
        cout<<num<<" nao e um numero primo."<<endl;
        return 0;
    }

    if(num == 2 || num == 3)
    {
        cout<<num<<" e um numero primo."<<endl;
        return 0;
    }

    if(num % 2 == 0 || num % 3 == 0)
    {
        cout<<num<<" nao e um numero primo."<<endl;
        return 0;
    }

    for(int i = 3; i * i <= num; i += 2)
    {
        if(num % i == 0)
        {
            cout<<num<<" nao e um numero primo."<<endl;
            return 0;
        }
    }
    
    cout<<num<<" e um numero primo."<<endl;

    return 0;
}
