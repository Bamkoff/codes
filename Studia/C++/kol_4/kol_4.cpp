#include <iostream>
using namespace std;

int ciag[1000];
int n;
int sum = 0;
int repeat_count(int number, int index)
{
	int count=0;
	for(int x=index+1;x<n;x++)
	{
		if(number==ciag[x]) count++;
	}
	
	return count;
}

int main()
{
	cin>>n;
	
	for(int i=0;i<n;i++)
	{
		cin>>ciag[i];
	}
	
	for(int i=0;i<n;i++)
	{
		sum = sum+repeat_count(ciag[i],i);
	}
	
	cout<<sum;
	return 0;