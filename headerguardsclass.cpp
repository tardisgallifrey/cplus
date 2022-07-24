//a class definition file,
//but it also needs to include the header file
#ifndef HEADER_GUARD_H
#define HEADER_GUARD_H
    #include "headerguards.h"   //quotations meands search this folder only
#endif

//Did I include these already, or not?
#ifndef STD_INCLUDES
#define STD_INCLUDES
    #include <iostream>
    #include <string>
#endif



//A class definition
class MyClass
{
    private:
        std::string message;
    public:
        MyClass(const std::string& amessage)
        : message{ amessage }
        {}

        std::string getmessage(void)
        {
            return message;
        }
};