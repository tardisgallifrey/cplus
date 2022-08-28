#include <cstdlib>
#include <pthread.h>
#include <unistd.h>
#include <iostream>

//Thread join is how to do async/await

#define NUM_THREADS 5

//This is async/await

void *wait(void *t) {
   int i;
   long tid;

   tid = (long)t;

   sleep(2);
   std::cout << "Sleeping in thread " << std::endl;
   std::cout << "Thread with id : " << tid << "  ...exiting " << std::endl;
   pthread_exit(NULL);
}

int main () {
   int rc;
   long i;
   pthread_t threads[NUM_THREADS];
   pthread_attr_t attr;
   void *status;

   // Initialize and set thread joinable
   //A regular thread didn't need an attribute value, so
   //it used a NULL instead

   //initialize the attribute
   pthread_attr_init(&attr);

   //set the attribute with the detached state of JOINABLE
   pthread_attr_setdetachstate(&attr, PTHREAD_CREATE_JOINABLE);


   //CREATING THE THREADS
   for( i = 0; i < NUM_THREADS; i++ ) {
      std::cout << "main() : creating thread, " << i << std::endl;

      //no NULL in seconda param now.  Use the attribute instead
      rc = pthread_create(&threads[i], &attr, wait, (void *)i );
      if (rc) {
         std::cout << "Error:unable to create thread," << rc << std::endl;
         exit(-1);
      }
   }

   // free attribute and wait for the other threads

   //JOINING THE THREADS TO THIS APP
   pthread_attr_destroy(&attr);
   for( i = 0; i < NUM_THREADS; i++ ) {
      rc = pthread_join(threads[i], &status);
      if (rc) {
         std::cout << "Error:unable to join," << rc << std::endl;
         exit(-1);
      }
      std::cout << "Main: completed thread id :" << i ;
      std::cout << "  exiting with status :" << status << std::endl;
   }

   std::cout << "Main: program exiting." << std::endl;
   pthread_exit(NULL);
}
