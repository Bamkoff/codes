#include <stdio.h>
#include <string.h>
#include <pthread.h>

int sum = 0;

/*stworzenie semafora*/
pthread_mutex_t mut = PTHREAD_MUTEX_INITIALIZER;
pthread_mutex_t index = PTHREAD_MUTEX_INITIALIZER;
/* ta funkcja będzie wywołana po starcie wątk */
void* child_fn ( void* arg ) {
   
   int j;
   int wart=0;
   while(i<1000000000)
   {
	   pthread_mutex_lock(&index);
	   j = i;
	   i++;
	   pthread_mutex_unlock(&index);
       wart=(wart + (j*j)) % 1024;
   }
    
	pthread_mutex_lock(&mut);
	sum=(sum+wart) % 1024;
	pthread_mutex_unlock(&mut);
    return NULL;
}

int main ( int argc, char **argv ) {
/*zmienne pomocnicze*/
int j = 0;
int liczba = 0;
int potega_10 = 1;
int pomocnicza = 0;
char string1[2];
strcpy(string1,argv[1]);
/*przerabianie tekstu na int*/
for(;j<strlen(string1)-1;j++) potega_10 = potega_10*10;
j = 0;
for(;j<=strlen(string1)-1;j++)
{
   pomocnicza = string1[j]-48;
   liczba = liczba + (pomocnicza*potega_10);
   if(potega_10!=1) potega_10 = potega_10/10;
}
/*rozpoczecie glownego programu*/

   int x;
   pthread_t child[100];
   /*wywolanie "liczba" watkow*/
   for(x=0;x<liczba;x++) pthread_create(&child[x], NULL, child_fn, NULL);
   /*czekanie na "liczba" watkow*/
   for(x=0;x<liczba;x++)pthread_join(child[x], NULL);
   printf("%d\n", sum);
   return 0;
}
