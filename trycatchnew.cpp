#include <iostream>
#include <exception>  //not normally needed, I think.  Just here

//Our struct inherits from the exception struct in std
struct MyException : public std::exception {

    //We create a brand new type of exception
    //this is the form of the function
   const char * what () const throw () {
      return "C++ Exception";
   }
};
 
int main() {
   try {
        //force a throw of our exception
      throw MyException();

   } catch(MyException& e) {

      //check to see if the MyException error is thrown,
      //stick the message in referenced 'e'
      //then print out the e.what() message
      std::cout << "MyException caught" << std::endl;
      std::cout << e.what() << std::endl;

   } catch(std::exception& e) {
      //Other errors
   }
}