#include <iostream>

using namespace std;

int main() {
    int num;
    cout<<"Digite um numero: ";
    cin>>num;
    if ((num%2)==0) {
                   cout<<"O numero e par\n";
                   if ((num%4)==0) {
                      cout<<"O numero e divisivel por 4\n";
                   }
    }
    else {
         cout<<"O numero e impar\n";
         if ((num%3)==0) {
            cout<<"O numero e divisivel por 3\n";
         }      
    }
    system ("Pause");
}
