#include <iostream>
#include <iomanip>
using namespace std;

void wypisz_tab(int t[1010],int n)
{
	for(int i=0;i<n;i++) cout<<t[i];
	cout<<endl;
}

float srednia_tab(int t[1010],int n)
{
	int suma = 0;
	for(int i = 0;i<n;i++) suma = suma + t[i];
	float srednia = (float)suma/(float)n; 
	return srednia;
}


int main()
{
	int tab[1010];
	int x,y,z;
	int n = 0;
	
	
	while(1)
	{
		cin>>x;
		switch(x)
		{
			case 0:
			{
				
				wypisz_tab(tab,n);
				break;
			}
			case 1:
			{
				cout<< fixed << setprecision(2) << srednia_tab(tab,n) <<endl;	
				break;	
			}
			case -1:
			{
				return 0;
			}
			default:
			{
				tab[n]=x;
				n++;
			}
			
		}
	}
	
	
}
