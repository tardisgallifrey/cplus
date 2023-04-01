#include <iostream>

//a base class
class MyBaseClass
{
    public:
    //a virtual method can be overriden in child classes
        virtual void dowork()
        {
            std::cout << "Hello from a base class." << std::endl;
        }
        //explicit destructor needs to be here
        virtual ~MyBaseClass(){};
};

//a class derived from MyBaseClass
class MyDerivedClass : public MyBaseClass
{
    public:
    //override dowork() from parent class
        void dowork()
        {
            std::cout << "Hello from a derived class." << std::endl;
        }
};

int main(){

    //Book used type of MyBaseClass here for obj's type
    //to show that the derived dowork() will be called?
    MyBaseClass* obj = new MyDerivedClass;
    //This is used because class is a POINTER TO CLASS
    obj->dowork();
    delete obj;
    return 0;

    //For more on inheritance and polymorphism, see inheritance.cpp
}