#include <iostream>
#include <string>

//to define a class
class MyClass
{
    //Everything after public is accessible outside class
    public:
        char c;
        int x; 
        double d;

        void do_something();
    
    //public stops here.
    //protected has some outside access
    protected:

    //protected stops here
    //private cannot be seen outside the class
    private:
};

//structs are classes where members are public by default
struct MyStruct
{
    //everything is public
};

//void is for do_something, not MyClass
//this is a member function of MyClass
void MyClass::do_something()
{
    std::cout << "Hello world from a class." << std::endl;
}

//Another class using public variable members
class Another_Class
{
    public:
       int x;

       void printx();
};

void Another_Class::printx()
{
    std::cout << "this.x is: " << x << std::endl;
}

class YAClass
{
    //It is best to keep class members private
    //and use a public method or constructor to set
    private:
        int x, y;
        int *p = new int;


    public:
        //A class constructor
        //presets x and y when called in main
        YAClass(int xx, int yy, int *pp){
            x = xx;
            y = yy;
            *p = *pp;
        }

        //a copy constructor
        //copy constructors are important because
        //pointers won't copy
        YAClass(const YAClass& rhs)
        {
            x = rhs.x;
            y = rhs.y;
            //no dereference needed,
            //yes, a new int has a constructor
            p = new int{*rhs.p};
            std::cout << "Copy made and set." << std::endl;
        }

        void printxy();

};

void YAClass::printxy()
{
    std::cout << "This.x and this.y are: " << x << " " << y << std::endl;
    std::cout << "This.p points to: " << *p << std::endl;
}

//classes with copy constructors and not


int main(void)
{
    int *num = new int;
    *num = 789;

    //declare an instance object of MyCLass
    //OR, a class variable
    MyClass aclass;
    Another_Class x;
    YAClass mine{123, 456, num};
    YAClass yours = mine;   //example of what happens without copy constructor
    

    //call the do_something method of aclass
    aclass.do_something();

    //assign 123 to x in class, then print it.
    x.x = 123;
    x.printx();

    mine.printxy();
    yours.printxy();

    return 0;

}

