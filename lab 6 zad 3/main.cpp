#include <iostream>

using namespace std;

int main()
{
    int *wsk = new int;
    *wsk = 10;
    cout << *wsk << endl;
    delete wsk;
    wsk = nullptr;
    return 0;
}
