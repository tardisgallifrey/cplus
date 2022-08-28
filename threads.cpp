#include <iostream>
#include <cstdlib>
#include <pthread.h>

//must be compiled with library pthread "-lpthread"

//threads uses the C library to make this work.
//It is similar, but not quite the same as async/await

#define NUM_THREADS 50

void *PrintHello(void *threadid) {
   //The void pointers used for thread id's should be long integers??
   long tid;
   tid = (long)threadid;
   std::cout << "Hello World! Thread ID, " << tid << std::endl;
   pthread_exit(NULL);
}

int main () {
   pthread_t threads[NUM_THREADS];
   int rc;
   //Since this will be passed as a void pointer to
   //the thread, it is best to use a long int
   //with a regular integer, I got warnings
   //and not quite a perfect output.
   long i;
   
   for( i = 0; i < NUM_THREADS; i++ ) {
      std::cout << "main() : creating thread, " << i << std::endl;
      rc = pthread_create(&threads[i], NULL, PrintHello, (void *)i);
      
      if (rc) {
         std::cout << "Error:unable to create thread," << rc << std::endl;
         exit(-1);
      }
   }
   pthread_exit(NULL);
}
