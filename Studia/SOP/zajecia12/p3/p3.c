#include <stdio.h>
#include <pthread.h>

pthread_mutex_t mut = PTHREAD_MUTEX_INITIALIZER;
int var = 0;

void* child_fn ( void* arg ) {
   pthread_mutex_lock(&mut);
   var++;
   pthread_mutex_unlock(&mut);
   return NULL;
}

int main ( void ) {
   pthread_t child;
   pthread_create(&child, NULL, child_fn, NULL);
   pthread_mutex_lock(&mut);
   var++;
   pthread_mutex_unlock(&mut);
   pthread_join(child, NULL);
   printf("\n%d\n", var);
   return 0;
}
