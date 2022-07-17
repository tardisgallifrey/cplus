#include <iostream>
#include <string>

//very generic
//template establishes this function
//as generic on types
template <typename T>
void myfunction(T param)
{
    std::cout << "The value of a parameter is: " << param << std::endl;

}

//more than one type
//the param names aren't important,
//only that they coincide with typename
//Typename doesn't have to be T or
//even a single character
template <typename Apple, typename B>
void myfunction2(Apple x, B y)
{
    std::cout << "First param is: " << x << std::endl;
    std::cout << "Second param is: " << y << std::endl;

}


//classes can be templated
//just maintain the typename
//all the way through the class definition
template <typename T>
class MyClass
{
    private:
        T x;
    public:
        MyClass(T xx)
        : x{ xx }
        {}

        T getvalue()
        {
            return x;
        }
};


int main(void)
{

    //To call a generic functin, or class
    //you have to supply the type when you call
    myfunction<int>(123);       //prints int
    myfunction<double>(456.01);  //prints a double
    myfunction<std::string>("Hello world");     //prints a string

    myfunction2<int, double>(123, 400.52);

    MyClass<int> object1{ 123 };
    MyClass<double> object2{ 400.51 };

    std::cout << "The values are: " << object1.getvalue() << " and " << object2.getvalue() << std::endl;

    return 0;
}