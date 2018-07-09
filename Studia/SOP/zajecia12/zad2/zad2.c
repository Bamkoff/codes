#include <stdio.h>
#include <pthread.h>
#define ITERACJE 1000000000
int var = 0;

/* ta funkcja będzie wywołana po starcie wątk */
void* child_fn ( void* arg ) {
   int i;
   for(i=0;i<ITERACJE;i++) var++;
   return NULL;
}

int main ( void ) {
   int i;
   pthread_t child;
   pthread_create(&child, NULL, child_fn, NULL);
   for(i=0;i<ITERACJE;i++) var++;
   pthread_join(child, NULL);
   printf("\n%d =? %d\n", var, 2 * ITERACJE);
   return 0;
}

