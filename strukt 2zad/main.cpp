#include <iostream>
#include <cmath>

using namespace std;
struct punkt {
double x;
double y;
};
double pole_trojkata(punkt a, punkt b, punkt c){

double pole = (b.x - a.x) * (c.y - a.y) - (b.y - a.y) * (c.x - a.x);

return (0.5 * abs(pole));
}
int main()
{   int tab[][];

    punkt punkt;
    punkt.x = 10;
    punkt.y = 20;

    return 0;
}
