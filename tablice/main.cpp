#include <iostream>

using namespace std;
float oceny[5], srednia, suma=0;
int main()
{   for(int i=0; i < 5; i++){
        cout << "Podaj "<< i+1 << " ocene: ";
        cin >> oceny[i];
        suma = suma + oceny[i];
    }
    srednia = suma/5;
    cout << "Oto srednia arytmetyczna Twoich ocen: " << srednia << endl;

    return 0;
}
