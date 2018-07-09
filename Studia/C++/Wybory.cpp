#include <iostream>
using namespace std;

int main()
{
	int m,n,b;
	int tab[10] = {0};
	int max = 0;
	int max_poz=1;
	cin >> m >> n;
	
	for(int i = 0;i<n;i++)
	{
		cin >> b;
		tab[b-1]++;
	}
	
	max = tab[0];
	
	for(int i = 0;i<m;i++)
	{
		cout<<i+1<<": "<<tab[i]<<endl;
		if(tab[i]>max)
		{
			max = tab[i];
			max_poz=i+1;
		}
	}
	cout<<max_poz;
	return 0;
}
