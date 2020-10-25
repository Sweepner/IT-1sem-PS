#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <conio.h>

using namespace std;
float x, y;
char wybor;
int main()
{
    for(;;){
    cout << "Podaj wartosc liczy x: ";
    cin >>x;
    cout << "Podaj wartosc liczy y: ";
    cin >>y;
    cout << endl;
    cout << "MENU GLOWNE" << endl;
    cout << "----------------" << endl;
    cout << "1. Dodawanie" << endl;
    cout << "2. Odejmowanie" << endl;
    cout << "3. Mnozenie" << endl;
    cout << "4. Dzielenie" << endl;
    cout << "5. Koniec programu" << endl;
    cout << endl;
    wybor=getch();
    switch(wybor){
case '1':
    cout <<"Wynikiem dodawania jest:"<< x+y;
    break;
case '2':
    cout <<"Wynikiem odejmowania jest:" << x-y;
    break;
case '3':
    cout <<"Wynikiem mnozenia jest:"<< x*y;
    break;
case '4':
    {   if(y==0)
        cout << "Nie umiesz matematyki!!";
        else
        cout <<"Wyniekiem dzielenia jest:"<< x/y;
    }

    break;
case '5':
    exit(0);
    break;
default:
    cout << "Nie ma takiej opcji w menu!";
}
getchar();getchar();
system("cls");
    }
    return 0;
}
