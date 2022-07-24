#include <iostream>
#include <memory>       //needed for smart pointers
#include <string>

//classes can be 'unique'-ed, too
class MyClass{
    public:
        void printmsg()
        {
            std::cout << "Class does nothing." << std::endl;
        }
};


int main(void)
{
    //to declare a smart pointer of int type
    //and initialize
    std::unique_ptr<int> p(new int{123});

    //better: no new int
    std::unique_ptr<double> d = std::make_unique<double>(400.51);

    //for a class
    std::unique_ptr<MyClass> object = std::make_unique<MyClass>();

    //from here foward, treat as any other pointer
    //It is delete itself and free memory
    std::cout << *p << std::endl;
    std::cout << *d << std::endl;
    object->printmsg();

    return 0;
}