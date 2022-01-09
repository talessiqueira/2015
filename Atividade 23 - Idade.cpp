#include <iostream>

         using namespace std;
         
         int main () {
             int idade;
             cout<<"Digite a idade";
             cin>>idade;
             if ((idade>=5)&&(idade<=7)) {
                cout<<"Infantil A\n";
             }
                else if ((idade>=8)&&(idade<=11)) {
                     cout<<"Infantil B\n";
                }
                     else if ((idade>=12)&&(idade<=13)) {
                          cout<<"Juvenil A\n";
                     }
                          else if ((idade >=14)&&(idade<=17)) {
                               cout<<"Juvenil B\n";
                          }
                               else {
                                    cout<<"Adultos";
                               }
               
             system ("Pause");
}
