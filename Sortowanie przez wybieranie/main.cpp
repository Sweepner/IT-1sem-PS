#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int find_min(int tab[], int n){
    int j = 0;
    for(int i = 0; i < n; i++){
        if(tab[j]>tab[i]){
        j=i;
        }
    }
    return j;
}

void my_swap(int tab[], int krecio, int miecio){
    int tmp=tab[krecio];
    tab[krecio]=tab[miecio];
    tab[miecio]=tmp;
}

int main()
{   const int N=10;
    int i, tab[N];
    srand(time(0));
    for(i=0; i < 10 ; i++){
        tab[i]=( rand() % 10 );
    //  cout << tab[i] << endl;

    }

    int my_min=find_min(tab, N);
   // cout << my_min << endl;
    for(i=0; i < 10; i++){
        my_swap(tab, i, my_min);
        my_min=find_min(tab, N);



    }


    return 0;
}
