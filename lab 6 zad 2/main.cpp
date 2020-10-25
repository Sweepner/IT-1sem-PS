#include <iostream>

using namespace std;

int main()
{
    const int N = 5;
    int tab[N]= {10, 20, 30, 40, 50};
    cout << *tab <<endl;
    cout << *(tab + 3) << endl;
    for (int i = 0; i < 5; i++)
        cout << *(tab + i) << " ";
    cout << endl;
    system("pause");
    return 0;
}
