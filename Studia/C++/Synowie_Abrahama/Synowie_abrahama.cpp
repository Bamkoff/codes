#include <iostream>
using namespace std;

int main()
{
	int tab[16];
	tab[0]=7;
	int N,M;
	int suma = 0;
	for(int i=1;i<16;i++)
	{
		if(i%2==0) tab[i] = tab[i-1]*3;
		else tab[i] = tab[i-1]*5;
	}
	cin>>N;
	for(int i = 0; i<N ; i++)
	{
		cin>>M;
		for(int x = 0; x<M;x++) suma =suma + tab[x];
		cout<<suma<<endl;
		suma = 0;
	}
	return 0;
}
