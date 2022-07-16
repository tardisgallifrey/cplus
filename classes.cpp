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
        //
        //When tested with and without this copy constructor
        //I saw no difference on output
        YAClass(const YAClass& rhs)
        : x{ rhs.x }, y{ rhs.y }, p{ new int { *rhs.p } }
        {
            std::cout << "Copy made and set." << std::endl;
        }

        //There is a move constructor, but I see little need

        //operator overload constructor
        //classes can be operated upon, such as YAClass++ or YAClass--
        //but a constructor is needed to define what to do in the case
        //an overloaded constructor is needed for each type of operator
        //if you don't provide an operator overload constructor, things may not work
        YAClass& operator++()
        {
            //If we type ++object the following 
            //will be incremented
            ++x;
            std::cout << "Operator overload activated" << std::endl;
            return *this;       //absolutely required
        }

        //Postfix operator overload is different
        //This does NOT use a referenced YAClass
        YAClass operator++(int)
        {
            //If we type object-- the following 
            //will be decremented
            YAClass tmp(*this);     //create temp copy
            operator++();           //invoke the prefix operator overload
            
            std::cout << "Postfix overload activated" << std::endl;
            return tmp;       //absolutely required
        }

        //A += or -= type of operator overload requires a parameter
        YAClass& operator+=(const YAClass rhs)
        {
            this->y += rhs.y;
            return *this;
        }
        
        //and addition, *, / type of operator requires two parameters
        //and friend prefix
        //notice copy in first param position isn't referenced,
        //this is friend, I think
        friend YAClass operator+(YAClass lhs, const YAClass& rhs)
        {
            lhs += rhs;
            return lhs;
        }

        //methods
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
    YAClass ours{0, 0, num};
    

    //call the do_something method of aclass
    aclass.do_something();

    //assign 123 to x in class, then print it.
    x.x = 123;
    x.printx();

    mine.printxy();
    yours.printxy();

    //increment x in mine?
    std::cout << "Increment X in mine before" << std::endl;
    ++mine;
    mine.printxy();

    std::cout << "Increment X in mine after" << std::endl;
    mine++;
    mine.printxy();
    std::cout << "binary addition '+=' of mine and yours" << std::endl;
    mine += yours;
    mine.printxy();
    std::cout << "regular addition of mine and yours" << std::endl;
    ours = mine + yours;
    ours.printxy();

    return 0;

}

