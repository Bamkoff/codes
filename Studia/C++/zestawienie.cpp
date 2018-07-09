#include <iostream>
using namespace std;

int main()
{
	int n = 0;
	int tab[205];
	
	cin >> n;
	
	for(int i=0;i<n;i++)
	{
		cin >> tab[i];
	}
	
	for(int i=n-1;i>0;i--)
	{
		if((i+1)%2==0) cout<<tab[i]<<" ";
	}
	
	return 0;
}
