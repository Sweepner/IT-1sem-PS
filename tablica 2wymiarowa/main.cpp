#include <iostream>


using namespace std;

int main()
{
    const int M=10, N=20;
    int tab[M][N];
   /* int x = 0;
    for (int i = 0; i < M; i++){
        for (int j = 0; j < N; j++){
            x++;
            tab[i][j] = x;
        }
    }
    for (int w = 0; w < M; w++){
        for(int k = 0; k < N; k++){
            cout << tab[w][k] << " ";
        }
        cout << endl;
    } */

    for(int i = 0; i < M*N; i++){
        int w = i/N;
        int k = i%N;
        tab[w][k]=i+1;
    }

    for (int w = 0; w < M; w++){
        for(int k = 0; k < N; k++){
            cout << tab[w][k] << " ";
        }
        cout << endl;
    }
    return 0;
}
