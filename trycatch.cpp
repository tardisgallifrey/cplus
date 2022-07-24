#include <iostream>

double division(int a, int b) {
   if( b == 0 ) {

      //try/catch needs a throw to work
      //this is a custom throw where
      //you follow throw with a message.
      //
      //the message is sent to try/catch
      throw "Division by zero condition!";
   }
   return (a/b);
}

int main () {
   int x = 50;
   int y = 0;     //generates error in division
   double z = 0;
 
   try {
      z = division(x, y);
      std::cout << z << std::endl;
   } catch (const char* msg) {

     //when the error is thrown,
     //catch receives the message we sent.
     //the const char* msg above is a place 
     //for the message to go.
     //
     //std::cerr is same as std::cout most times.
     std::cerr << msg << std::endl;
   }

   return 0;
}