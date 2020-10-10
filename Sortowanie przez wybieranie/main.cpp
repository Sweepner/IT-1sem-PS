#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int find_min(int tab[], int n, int start){
    int j = start;
    for(int i = start; i < n; i++){
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
    for(i=0; i < N ; i++){
        tab[i]=( rand() % 10 );
    //  cout << tab[i] << endl;

    }


   // cout << my_min << endl;
    for(i=0; i < N; i++){
        int my_min=find_min(tab, N, i);
        my_swap(tab, i, my_min);
    }
    cout << "[";
    for(i=0 ; i < N ; i++){
        cout << tab[i] << ",";
    }
    cout << "]" << endl;

 /*   for(int i = 0; i < N; i++) {
        int min_index = i;
        int min_value = tab[i];
        for(int j = i; j < N; j++) {
            if(tab[j] < min_value){
                min_value = tab[j];
                min_index = j;
            }
        }
        int tmp = tab[i];
        tab[i] = tab[min_index];
        tab[min_index] = tmp;
    } */
    return 0;
}
