//Dynamic storage
//is similar or same as malloc() in C
#include <iostream>
#include <string>

int main(void)
{
    //use of new and delete
    int *p = new int;
    *p = 123;            //gets rid of the p = &x feature

    std::cout << "The value pointed to by p is: " << *p << std::endl;

    *p = 246;
    std::cout << "The value pointed to by p is now: " << *p << std::endl;

    p++;
    *p = 567;
    std::cout << "Now p points to next address and contains: " << *p << std::endl;
    
    //The p++ changed the address for *p,
    //delete catches this.  *p has to return to 
    //original address
    p--;

    //strings are like this, but they work, too
    std::string *mystring = new std::string;

    *mystring = "Hello World.";

    std::cout << *mystring << std::endl;

    //Just like free()
    delete p;
    delete mystring;
}