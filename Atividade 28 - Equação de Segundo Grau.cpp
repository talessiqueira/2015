#include <iostream> 
#include <math.h>

using namespace std;

int main () {
    float a, b, c, x1, x2, delta;
    cout<<"Digite o valor de a: ";
    cin>>a;
    cout<<"Digite o valor de b: ";
    cin>>b;
    cout<<"Digite o valor de c: ";
    cin>>c;
    delta=(pow(b,2)-4*a*c);
    x1= ((-b+sqrt(delta))/2*a);
    x2= ((-b-sqrt(delta))/2*a);
    cout<<"O valor de x1 e: ";
    cout<<x1;
    cout<<"\n";
    cout<<"O valor de x2 e: ";
    cout<<x2;
    cout<<"\n";
      system ("Pause");
}
    
