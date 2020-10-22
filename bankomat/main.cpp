#include <iostream>

using namespace std;
string PIN;
int main()
{
    cout << "Witaj w naszym banku!" << endl;
    cout << "Podaj nr PIN" << endl;
    cin >> PIN;
    if(PIN=="1729"){
        cout <<"Poprawny PIN" << endl;
    }
    else {
        cout << "PIN jest nie poprawny";
    }
    return 0;
}
