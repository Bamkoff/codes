#include <iostream>
using namespace std;
 
int main()
{
	int tab[101];
	int t,n;
	tab[0]=4;
	tab[1]=7;
	for(int i = 2;i<101;i++)
	{
		tab[i] = ((2*tab[i-1])+(5*tab[i-2]))%2011;
	}
	cin>>t;
	for(int i=0;i<t;i++)
	{
		cin>>n;
		cout<<tab[n]<<endl;
	}
 
	return 0;
}
