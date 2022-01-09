//Eleitor
#include <iostream>

using namespace std;

int main () {
    int idade;
    cout<<"Eleitor\n";
    cout<<"Digite a idade: ";
    cin>>idade;
    if ((idade==16)||(idade==17)) {
       cout<<"Eleitor Facultativo\n";
    }
    else if (idade<16) {
        cout<<"Nao Votante\n";
        }
        else {
             cout<<"Eleitor Obrigatorio\n";
             } 
    system ("PAUSE");
}
    
