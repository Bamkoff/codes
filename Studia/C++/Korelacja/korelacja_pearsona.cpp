#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int n;
double x,y;
double iloczyn_x_y,suma_x,suma_y,kwadrat_x,kwadrat_y,wynik,licznik,mianownik1,mianownik2,mianownik = 0;


int main()
{
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		cin>>y;
		iloczyn_x_y = iloczyn_x_y + (x*y);
		suma_x = suma_x + x;
		suma_y = suma_y + y;
		kwadrat_x = kwadrat_x + (x*x);
		kwadrat_y = kwadrat_y + (y*y);
	}
	licznik = (n*iloczyn_x_y);
	licznik = licznik - (suma_x * suma_y);
	mianownik1 = 5 * kwadrat_x - (suma_x*suma_x);
	mianownik2 = 5 * kwadrat_y - (suma_y*suma_y);
	mianownik = sqrt(mianownik1*mianownik2);
	cout<<fixed<<setprecision(2)<<mianownik2<<endl;
	
	return 0;
}
