#include <iostream>


//All about Lambda expressions in C++

//Lambda (or functionize a class)
class MyClass
{
    public:

        //same as when we used operator++ to get MyClass++
        //only now it's function
        //params and returns are allowed
        bool operator()(int x)
        {
            if( x % 2 == 0)
            {
                return true;
            }else
            {
                return false;
            }
        }

};

int main(int argc, char* argv[])
{

    MyClass myobject;
    bool answer = myobject(5); //call class like a function
    std::cout << "Is 5 even or odd? " << answer << std::endl;

    //A C++ lambda expression, similar to C# or JavaScript
    auto mylambda = [](){ std::cout << "Hello from a lambda." << std::endl; };

    //call the anonymous function
    mylambda();

    //The [] has a special feature in c++
    //It allows the lambda to include current scope variables
    //in lambda body.  It captures them into the lambda's scope.
    int x = 123;
    int y = 456;

    auto mylambda2 = [x, y](){
        //returns are legal
        //Now, x and y has scope here,
        //just as if they belonged
        return x + y;
    };  //remember, lambdas get semicolons

    //Now, note the difference, 
    //x and y could not be passed in at time of use like a param
    std::cout << mylambda2() << std::endl;

    //Probably better use of a lambda
    auto mylambda3 = [](int x, int y){
        //x and y are params
        //not scoped outside of here
        return x + y;
    };

    //Now, I can pass in variables at will
    std::cout << mylambda3(x, y) << std::endl;

    return 0;
}