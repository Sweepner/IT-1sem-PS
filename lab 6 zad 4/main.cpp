#include <iostream>
#include <memory>

using namespace std;

int main()
{
    unique_ptr<int> wsk(new int);
    *wsk = 10;
    cout << *wsk << endl;
    unique_ptr <int> wsk(new int);
    wsk.reset(new int);

    return 0;
}
