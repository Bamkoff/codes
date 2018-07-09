#include <iostream>

using namespace std;

int liczby[4];
int D;
int iloczyn = 1;;

int NWD(int a, int b)
{
	int x = a;
	int y = b;
	if(b==0) return a;
	else return NWD(y,x%y);
}

int NWW(int liczba1, int liczba2)
{
	return liczba1*liczba2/NWD(liczba1,liczba2);
}

int main()
{
	cin>>D;
	
	for(int i=0;i<D;i++)
	{
		for(int x=0;x<4;x++) 
		{
			cin>>liczby[x];
			iloczyn = iloczyn * liczby[x];
		}
		
		cout<<NWW(liczby[0],NWW(liczby[1],NWW(liczby[2],liczby[3])))<<endl;;
		iloczyn=1;
	}
	return 0;
}


