#include <stdio.h>
#include <string.h>

int main()
{
	int n;
	int s1,s2 = 0;
	int l1,l2 = 0;
	char string1[21];
	char string2[11];
	scanf("%d",n);
	
	for(int x = 0;x<n;x++)
	{
		scanf("%s %s",string1,string2);
		
		if(strcmp(strpbrk(string1,"123456789"),"\0")==0 && strcmp(strpbrk(string2,"123456789"),"\0")==0)
		{
			strcat(string1,string2);
			printf("%s\n",string1);
		}
		
	}
	
	return 0;
}
