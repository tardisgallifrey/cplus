//Third file
//The main function file or entry point
#ifndef STD_INCLUDES
#define STD_INCLUDES
    #include <iostream>
    #include <string>
#endif

//This one won't include the header file
//because headerguardsclass already did
#ifndef HEADERGUARD_H
#define HEADERGUARD_H
    #include "headerguards.h"
#endif

#ifndef MYCLASS
#define MYCLASS
    #include "headerguardsclass.cpp"
#endif


//now define function
void myfunction(void)
{
    std::cout << "This is my special function declared ";
    std::cout << "in 'headerguards.h' and defined in ";
    std::cout << "headerguardsclass.cpp" << std::endl;

}

int main(void)
{
    //I can instantiate an object
    //because it was defined in headerguardsclass.cpp
    MyClass object1{ "Hello World"};

    //I can call myfunction() because it was declared
    //in headerguards.h
    //and defined in headerguardsclass.cpp
    myfunction();

    std::cout << "Message from class: ";
    std::cout << object1.getmessage() << std::endl;

    return 0;
};


