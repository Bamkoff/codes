#include <iostream>
using namespace std;

int A(int y)
{
	if(y==0) return 0;
	if(y==1) return 1;
	return (A(y-1)-2*A(y-2)+y);
}

int main()
{
		
	int n,x=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		cout<<A(x)<<endl;
	}
	
	
	return 0;
}