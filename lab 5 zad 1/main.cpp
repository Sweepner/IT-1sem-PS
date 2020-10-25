#include <iostream>
#include <string>
#include <limits>
#include <fstream>

using namespace std;

/*int main()
{
    string napis;
    cin >> napis;
    cout << napis;
    return 0;
}
 */

/* int main()
{
    string napis;
    getline(cin, napis);
    cout << napis;
    return 0;
} */
/*
int main()
{
    string napis;
    int liczba;

    cin >> liczba;
    cin.get();
    getline(cin, napis);
    cout << napis << endl;
    cout << liczba;
    return 0;
}
*/


/* int sprawdzenie(int liczba1, int liczba2)
{


    if(!cin){

        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }


}
int main()
{   int liczba1, liczba2;
    cout << "Podaj dwie liczby: " << endl;
    cin >> liczba1;
    cin >> liczba2;
    sprawdzenie(liczba1, liczba2);
    cout << liczba1 << endl << liczba2 << endl;

    return 0;
}
*/
/* int main()
{   fstream plik;
    int a;
    cin >> a;
    plik.open ("lab5zad4.txt",ios::out);
    plik << a;





    return 0;
} */
int main()
{
    ofstream plikwyjsciowy("dane.txt");
    if(plikwyjsciowy.is_open())
    {
        plikwyjsciowy << 100 << '\n';
    }
    plikwyjsciowy.close("dane.txt");
    ifstream plikwejscia("dane.txt");
    if(plikwyjsciowy.is_open())
    {
        int liczba;
        plikwejscia >> liczba;
    }




    return 0;
}
















