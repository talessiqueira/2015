#include <iostream> 
#include <math.h>

using namespace std;

int main () {
    
    float Cat1, Cat2, Hipo;
    cout<<"Digite o valor do cateto 1: ";
    cin>>Cat1;
    cout<<"Digite o valor do cateto 2: ";
    cin>>Cat2;
    Hipo = sqrt(pow(Cat1,2)+pow(Cat2,2));
    cout<<"O valor da hipotenusa e: ";
    cout<< Hipo;
    cout<< "\n";
    
    system ("Pause");
}
    
    
