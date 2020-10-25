#include <iostream>

using namespace std;

int main()
{
    int liczba1, liczba2, i;
    cout << "Podaj zakres liczb" << endl;
    cin >> liczba1;
    cin >> liczba2;
    if(liczba1%2==1){
    liczba1++;
    }
    if(liczba1>liczba2){
    for(i=liczba1;i>liczba2;i-=2){


    cout << i << endl;

    }
}   else  for(i=liczba1;i<liczba2;i+=2){

    cout << i << endl;

    }
    return 0;
}
