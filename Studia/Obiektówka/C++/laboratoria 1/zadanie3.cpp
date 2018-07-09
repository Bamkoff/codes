#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAXLEN 100

char* gets(char*);
char tablica[101];

int main()
{
	int licznik=0;
	char buf[MAXLEN+1];
	while(gets(buf))
	{
		tablica[licznik] = malloc(strlen(buf));
		strcat(tablica[licznik],buf);
		licznik++;
	}
	
	while(licznik>=0)
	{
		printf("%s\n",tablica[licznik]);
		licznik--;
	}
	free(tablica);
	return 0;
}
