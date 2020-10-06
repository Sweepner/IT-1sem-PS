#include <iostream>


using namespace std;

int main()
{   int a,b,c;
    cout<<"Podaj wartosci bokow trojkata"<<endl;
    cin>>a>>b>>c;
    if(a+b<c and a+c<b and b+c<a)
    {
        cout<<"Z podanych wartosci nie da sie zrobic trojkata"<<endl;
    }
    else
    {
        cout<<"Z podanych wartosci da sie zrobic trojkat"<<endl;
    }
    if(a+b>c and a+c>b and b+c>a)
    {

    }


    return 0;
}
