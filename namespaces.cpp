#include <iostream>
#include <string>

//namespaces

//Namespaces can be used for private/special namespaces
//but are discouraged for standard library namespaces
//such as standard.

//A namespace is just a collection of data,
//could be classes, functions, or fields.
namespace SomeData{

      std::string Astring = "Hello WOrld from SomeData.";

     void displayfunc(void)
     {
        std::cout << Astring << std::endl;
     }
}



//A namespace can be separated and the sum of all data in 
//a namespace with the same name is legal.
//While this is a poor example, the connection can come over
//several files that describe the namespace.
namespace SomeData{

    int data = 12345;

    void displaymore(void){
       std::cout << Astring << " plus " << data << std::endl;
    }

    //namespaces can be nested inside other namespaces
    namespace InsideSomeData{
      void display(void){
         std::cout << "Now inside nested namespace: InsideSomeData." << std::endl;
      }
   }

}


//to utilize a namespace in an app, do this:
using namespace SomeData;
//to utilized a nested namespace
using namespace SomeData::InsideSomeData;
int main(void)
{

    SomeData::displayfunc();
    SomeData::displaymore(); 
    InsideSomeData::display();
    return 0;

}

