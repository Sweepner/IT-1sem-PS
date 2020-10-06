#include <iostream>
#include <math.h>

using namespace std;

int main()
{   double a, b, c;
    cout << "Podaj wartosc a" << endl;
    cin>>a;
    cout << "Podaj wartosc b" << endl;
    cin>>b;
    cout << "Podaj wartosc c" << endl;
    cin>>c;
    double delta;
    delta = b * b - 4 * (a * c);
    if(delta > 0){
        double x1, x2;
        x1 = (-b - sqrt(delta)) / (2 * a);
        x2 = (-b + sqrt(delta)) / (2 * a);
        cout<<"Pierwiastkami rownania sa: "<<x1<<", "<<x2<<endl;
    } else if(delta == 0){
        double x0;
        x0 = -b / (2 * a);
        cout<<"Pierwiastkiem rownania jest: "<<x0<<endl;
    } else {
        delta = -delta;


       // x1 = (-b - sqrt(delta)) / (2 * a);
     //   x2 = (-b + sqrt(delta)) / (2 * a);
        cout<<"Pierwiastkami rownania sa: "<<endl;
        cout<<(- b - sqrt(delta)) / (2 * a)<<"i"<<", "<<(- b + sqrt(delta)) / (2 * a)<<"i"<<endl;

    }

    return 0;
}
