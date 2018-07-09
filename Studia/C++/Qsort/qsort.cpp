#include <iostream>

using namespace std;

int czekoladki[100];
int D,N;

int podziel(int p,int k)
{
	int wlasciwa = czekoladki[k];
	int i = p-1;
	for(int j=p;j<k;j++)
	{
		if(czekoladki[j]>=wlasciwa)
		{
			i++;
			swap(czekoladki[i],czekoladki[j]);
		}
		
	}
	swap(czekoladki[i+1],czekoladki[k]);
	return (i+1);
}

void qsort(int poczatek, int koniec)
{
	if(poczatek<koniec) 
	{
	int q = podziel(poczatek,koniec); 	
	qsort(poczatek,q-1);
	qsort(q+1,koniec);	
	}	
}

int main()
{
	cin>>D;
	for(int x=0;x<D;x++)
	{
		cin>>N;
		for(int y=0;y<N;y++)
		{
			cin>>czekoladki[y];
		}
		qsort(0,N-1);
		for(int y=0;y<N;y++)
		{
			cout<<czekoladki[y]<<" ";
		}
		cout<<endl;
	}

	return 0;
}
