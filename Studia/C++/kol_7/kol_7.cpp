#include <iostream>
#include <stdlib.h>
#include <iomanip>

using namespace std;

int tab[1000];

int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}

int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++) cin>>tab[i];

	qsort(tab,n,sizeof(int),compare);
	
	if(n%2==0)
	{
		n=n-1;
		cout<<fixed<<setprecision(1)<<(float(tab[n/2])+float(tab[(n/2)+1]))/2;
	}
	else
	{
		cout<<fixed<<setprecision(1)<<float(tab[n/2]);
	}
	return 0;
}