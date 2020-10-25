#include <iostream>
#include <fstream>
#include <cstdlib>


using namespace std;

int main()
{   int nr_lini=1;
    fstream plik;
    plik.open("lab5zad5.txt",ios::in);
    string linia;
    while (getline(plik, linia))
    {
        cout << linia << endl;
        nr_lini++;
    }


    return 0;
    }


