#include <iostream>

using namespace std;

int NWD(int a, int b)
{
	int x = a;
	int y = b;
	if(b==0) return a;
	else return NWD(y,x%y);
}



int main()
{
	int l1,l2,l3,suma = 0;
	
	while(1)
	{
		cin>>l1;
		switch(l1)
		{
			case 0:
			{
				cout<<suma;
				return 0;
			}
			case 1:
			{
				suma = suma + NWD(l2,l3);	
				break;
			}
			default:
			{
				l3 = l2;
				l2 = l1;
			}
		}
	}
	
	return 0;
}
