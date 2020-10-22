#include <iostream>
#include <cmath>
using namespace std;

struct Punkt {
	double x;
	double y;
};

double wylicz(Punkt a, Punkt b, Punkt c)
{
	int liczba = (b.x - a.x) * (c.y - a.y) - (b.y - a.y) * (c.x - a.x);
	return (0.5) * abs(liczba);

};

double Pole(Punkt tab[])
{
	double maxPole = 0;
	for (int i = 0; i < 5; i++)
	{
		for (int j = i + 1; j < 5;j++)
		{
			for (int k = j + 1;k <= 5;k++)
			{
				{
					double nowePole = wylicz(tab[i], tab[j], tab[k]);
					if (nowePole > maxPole)
					{
						maxPole = nowePole;
					}
				}
			}
		}
	}
	return maxPole;
}

int main() {

//	Wyksztalcenie wyk = Wyksztalcenie::WYZSZE;
//	cout << "ZADANIE 2 i 3\n";

	Punkt a;
	Punkt b;
	Punkt c;
	Punkt d;
	Punkt e;
	a.x = 10;
	a.y = 20;
	b.x = 30;
	b.y = 20;
	c.x = 30;
	c.y = 20;
	d.x = 20;
	d.y = 30;
	e.x = 25;
	e.y = 30;

	Punkt tab[5]{ a,b,c,d,e };
	cout << "Najwieksze pole: " << Pole(tab) << ".\n";

	return 0;
}
