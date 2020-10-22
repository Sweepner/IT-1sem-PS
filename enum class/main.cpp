#include <iostream>

using namespace std;

enum class wyksztalcenie {
    brak,
    podstawowe,
    srednie,
    wyzsze
    };
    void (wyksztalcenie, wyksztalcenie)
    switch(wyksztalcenie){
    case wyksztalcenie::brak:
    cout << "brak wyksztalcenia";
    case wyksztalcenie::podstawowe:
    cout << "wyksztalcenie podstawowe";
    case wyksztalcenie::srednie:
    cout << "wyksztalcenie srednie";
    case wyksztalcenie::wyzsze:
    cout << "wyksztalcenie wyzsze";

    }
int main()
{
   wyksztalcenie wyk=wyksztalcenie::wyzsze;
    return 0;
}
