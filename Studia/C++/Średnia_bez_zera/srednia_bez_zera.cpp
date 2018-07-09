#include <iostream>
using namespace std;

int main()
{
	int tab[1000];
	int i,suma = 0;
	int srednia;
	while(1)
	{
		cin>>tab[i];
		switch(tab[i])
		{
			case 0:
				{
					for(int x = 0; x<i ;x++)
					{
						suma = suma + tab[x];
					}
					srednia = suma/i;	
					cout<<;
					return 0;
				}
			default:
				{
					i++;
				}
			
		}
		
	}
	
	
	return 0;
}
