#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    const int N=10;
    int tab[N], i;
    srand(time(0));
 // cout << (rand() % 10);
 /*   tab[0] = (rand() % 10);
    tab[1] = (rand() % 10);
    tab[2] = (rand() % 10);
    tab[3] = (rand() % 10);
    tab[4] = (rand() % 10);
    tab[5] = (rand() % 10);
    tab[6] = (rand() % 10);
    tab[7] = (rand() % 10);
    tab[8] = (rand() % 10);
    tab[9] = (rand() % 10); */
    for(i = 0;i < 10;i++){
        tab[i] = (rand() % 10);

    }
    for(i = 0;i < 10;i++){
        cout << tab[i] << endl;
    }

    return 0;
}
