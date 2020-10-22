#include <iostream>

using namespace std;

int main()
{
    int zmienna = 10;
    int zmienna2 = 20;
    cout << zmienna << endl;
    cout << zmienna2 << endl;
    int* wsk = &zmienna;
    cout << *wsk;
    *wsk = 30;
    cout << zmienna << endl;
    wsk = &zmienna2;
    *wsk = 40;
    cout << zmienna2 << endl;
    wsk = nullptr;
    return 0;
}
