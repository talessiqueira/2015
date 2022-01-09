#include <iostream>

using namespace std;

int main () {
    
    int pratoPrincipal;
    
    cout<<"Digite o prato principal: ";
    cin>>pratoPrincipal;
    switch (pratoPrincipal){
           case 1:
                cout<<"Macarrao\n";
                break;
           case 2:
                cout<<"Feijoada\n";
                break;
           case 3:
                cout<<"Salada\n";
                break;
           default:
                   cout<<"Prato nao encontrado";
    }
    system ("Pause");
}
