#include <stdio.h>
#include <pthread.h>

int var = 0;

/* ta funkcja będzie wywołana po starcie wątk */
void* child_fn ( void* arg ) {
   var++;
   return NULL;
}

int main ( void ) {
   pthread_t child;
   pthread_create(&child, NULL, child_fn, NULL);
   var++; /* ta sama zmienna jest wykorzystywana przez wątek potomny */
   pthread_join(child, NULL);
   printf("\n%d\n", var);
   return 0;
}
