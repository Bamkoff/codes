#include <iostream>

using namespace std;

int liczby[4];
int D;

int NWD(int a, int b)
{
	int x = a;
	int y = b;
	if(b==0) return a;
	else return NWD(y,x%y);
}

int main()
{
	cin>>D;
	
	for(int i=0;i<D;i++)
	{
		for(int x=0;x<4;x++) cin>>liczby[x];
		cout<<NWD(liczby[0],NWD(liczby[1],NWD(liczby[2],liczby[3])))<<endl;;
	}
	return 0;
}


