#include <iostream>
#include <string>

//C++ class inheritance and polymorphism

//Original class
class MyBaseClass
{
    //protected means derived class objects can see these,
    //but a direct object from this class cannot
    protected:
        char c;
        int x;

    public:

        //These methods cannot be overridden by child classes
        void setC(char b)
        {
            c = b;
        }

        void setX(int y)
        {
            x = y;
        }

        char getC(void)
        {
            return c;
        }

        int getX(void)
        {
            return x;
        }

        //This can be overriden by child classes
        virtual void do_work(void)
        {
            std::cout << "Hello from base class" <<  std::endl; 
        }

};

//My Derived class MyDerived inherits from MyBase
class MyDerivedClass : public MyBaseClass
{

    //the entire structure of MyBaseClass is available here

    
    public:

        //overriden virtual class from Base
        void do_work(void)
            {
                std::cout << "Hello from derived class" <<  std::endl; 
            }
};

//abstract class uses pure functions, like below (=0)
//these virtual functions MUST be defined in the derived, child classes.
//This is also an Interface class, can't be instantiated
class MyAbstractClass
{
    //public is still necessary
    public:
        virtual void do_work() = 0;
        //no function body
};

class MyMorphedClass
{
    public:
        void do_work()
        {
            std::cout << "Output from the Morphed child" << std::endl;
        }
};


int main(void)
{

    MyDerivedClass object1;
    MyBaseClass object2;
    MyMorphedClass* object3 = new MyMorphedClass;       //pointer to class object

    object1.setC('x');
    object1.setX(50);
    std::cout << "MyDerived fields: " << object1.getC() << " " << object1.getX() << std::endl;

    object2.do_work();     //called from base class
    object1.do_work();      //called from derived class

    //call to methods and fields in pointer class like this
    object3->do_work();

    //pointer class objects must be deleted
    delete object3;

    return 0;

}