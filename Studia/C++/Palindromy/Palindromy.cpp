#include <string.h>
#include <stdio.h>

int main()
{
	char string[32];
	int d,n = 0;
	int flaga = 0;
	scanf("%d",&d);
	for(int x=0;x<d;x++)
	{
		scanf("%s",string);
		n = strlen(string);
		for(int i=0;i<n/2;i++)
		{
			if(string[i]!=string[n-1-i]) flaga = 1; 
		}
		
		if (flaga==0) 
		{	
			printf("%s==",string);
			for(int i = n-1;i>=0;i--) printf("%c",string[i]);
		}
		if (flaga==1) 
		{	
			printf("%s!=",string);
			for(int i = n-1;i>=0;i--) printf("%c",string[i]);
		}
		printf("\n");
		flaga=0;
	}
	
	
	return 0;
}
