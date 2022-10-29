#include <iostream>

//Static function members
//static members are defined at program start.  
//They hold their value across instantiation

void myStaticFunction() {
        static int x = 0;  //a static integer
        x++;
        std::cout << x << std::endl;
    
}


class MyStaticClass {
    public:
        static int x; //declare a static member variable
};

int MyStaticClass::x = 123;  //define value of a static variable
                             //outside of class definition

int main(void){
    myStaticFunction();
    myStaticFunction();
    myStaticFunction();

    MyStaticClass::x = 456; //access static member
                            //Note: no instantiation needed
    std::cout << "Static data member value is: " << MyStaticClass::x << std::endl;
}