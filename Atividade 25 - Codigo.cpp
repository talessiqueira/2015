#include <iostream>

using namespace std;

int main () {

    int Codigo;
    
    cout<<"Digite o codigo do produto: ";
    cin>>Codigo;
    switch (Codigo) {
           case 1:
                cout<<"Alimento nao perecivel\n";
                break;
           case 2 ... 4:
                cout<<"Alimento perecivel\n";
                break;
           case 5 ... 6:
                cout<<"Vestuario\n";
                break;
           case 7:
                cout<<"Higiene Pessoal\n";
                break;
           case 8 ... 9:
                cout<<"Limpeza e Utensilios Domesticos\n";
           default:
                cout<<"Invalido\n";
    }
                     
    system ("Pause");
}
