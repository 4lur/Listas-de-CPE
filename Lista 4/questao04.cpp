/*
Lista 4
Questão: 4
Aluno: Vinicius Magno da Silva Nascimento
Matricula: 222005528
Programa: Calculadora de vendas
*/

#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    system("cls");
    cout<<"1 - Produto 1: R$ 2,98\n";
    cout<<"2 - Produto 2: R$ 4,50\n";
    cout<<"3 - Produto 3: R$ 9,98\n";
    cout<<"4 - Produto 4: R$ 4,49\n";
    cout<<"5 - Produto 5: R$ 6,87\n";
    cout<<"0 - Para sair\n\n";
    
    
    // Inicializa o total de vendas
    double totalVendas = 0.0;
    // Armazena o numero do produto e a quantidade vendida
    int numeroProduto, quantidadeVendida;

    // Loop para ler os pares de numeros ate o usuário decidir parar
    while(true)
    {
        cout<<"Informe a opcao desejada: ";
        cin>>numeroProduto;

        // Verifica se o usuário deseja sair
        if(numeroProduto == 0)
        {
            break;
        }

        // Valida o numero de entrada
        if(numeroProduto < 1 || numeroProduto > 5 )
        {
            cout<<"ERRO! Numero de produto invalido, Por favor digite um numero de 1 a 5"<<endl;
            continue;
        }

        cout<<"Digite a quantidade de vendas: ";
        cin>>quantidadeVendida;

        double totalProduto = 0.00;

        switch (numeroProduto)
        {
        case 1:
            totalProduto = 2.98 * quantidadeVendida;
            break;
        case 2:
            totalProduto = 4.50 * quantidadeVendida;
            break;
        case 3:
            totalProduto = 9.98 * quantidadeVendida;
            break;
        case 4:
            totalProduto = 4.49 * quantidadeVendida;
            break;
        case 5:
            totalProduto = 6.87 * quantidadeVendida;
            break;
        }
        totalVendas += totalProduto;
        cout<<"Vendas para o produto "<<numeroProduto<<" : R$ "<<totalProduto<<endl;
    }
    // Exibe o total de vendas
    cout<<"Total de vendas: R$ "<<totalVendas<<endl;

    return 0;
    
}
