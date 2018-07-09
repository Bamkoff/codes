#include <stdio.h>
#include <pthread.h>

pthread_mutex_t f1 = PTHREAD_MUTEX_INITIALIZER;
pthread_mutex_t f2 = PTHREAD_MUTEX_INITIALIZER;
pthread_mutex_t f3 = PTHREAD_MUTEX_INITIALIZER;
pthread_mutex_t f4 = PTHREAD_MUTEX_INITIALIZER;
pthread_mutex_t f5 = PTHREAD_MUTEX_INITIALIZER;


void* filozof1 ( void* arg ) {
   int x;
   for(x=0;x<1000;x++)
   {
	   printf("Jestem filozofem o nr. 1 i mysle.\n");
	   pthread_mutex_lock(&f1);
	   pthread_mutex_lock(&f5);
	   printf("Jestem filozofem o numerze 1 i najadlem sie.\n");
	   pthread_mutex_unlock(&f1);
	   pthread_mutex_unlock(&f5);
   }
   return NULL;
}

void* filozof2 ( void* arg ) {
   int x;
   for(x=0;x<1000;x++)
   {
	   printf("Jestem filozofem o nr. 2 i mysle.\n");
	   pthread_mutex_lock(&f1);
	   pthread_mutex_lock(&f2);
	   printf("Jestem filozofem o numerze 2 i najadlem sie.\n");
	   pthread_mutex_unlock(&f1);
	   pthread_mutex_unlock(&f2);
   }
   return NULL;
}

void* filozof3 ( void* arg ) {
   int x;
   for(x=0;x<1000;x++)
   {
	   printf("Jestem filozofem o nr. 3 i mysle.\n");
	   pthread_mutex_lock(&f3);
	   pthread_mutex_lock(&f2);
	   printf("Jestem filozofem o numerze 3 i najadlem sie.\n");
	   pthread_mutex_unlock(&f3);
	   pthread_mutex_unlock(&f2);
   }
   return NULL;
}

void* filozof4 ( void* arg ) {
   int x;
   for(x=0;x<1000;x++)
   {
	   printf("Jestem filozofem o nr. 4 i mysle.\n");
	   pthread_mutex_lock(&f3);
	   pthread_mutex_lock(&f4);
	   printf("Jestem filozofem o numerze 4 i najadlem sie.\n");
	   pthread_mutex_unlock(&f3);
	   pthread_mutex_unlock(&f4);
   }
   return NULL;
}

void* filozof5 ( void* arg ) {
	int x;
	for(x=0;x<1000;x++)
    {   
	   printf("Jestem filozofem o nr. 5 i mysle.\n");
	   pthread_mutex_lock(&f5);
	   pthread_mutex_lock(&f4);
	   printf("Jestem filozofem o numerze 5 i najadlem sie.\n");
	   pthread_mutex_unlock(&f5);
	   pthread_mutex_unlock(&f4);
	}
   return NULL;
}

int main ( void ) {
   pthread_t filozof[5];
   pthread_create(&filozof[0], NULL, filozof1, NULL);
   pthread_create(&filozof[1], NULL, filozof2, NULL);
   pthread_create(&filozof[2], NULL, filozof3, NULL);
   pthread_create(&filozof[3], NULL, filozof4, NULL);
   pthread_create(&filozof[4], NULL, filozof5, NULL);
   int i;
   for(i=0;i<5;i++) pthread_join(filozof[i], NULL);
 
   return 0;
}