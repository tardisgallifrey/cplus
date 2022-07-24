#include <iostream>
#include <string>


int main(void)
{
    try
    {
        throw 123;
        //the following won't run because of error above
        std::cout << "Assume an error occurs here." << std::endl;
        std::cout << "(inside try)" << std::endl;

        //IF YOU NEED TO CHECK MORE THAN ONE ERROR
        //use an if/then to separate checks and 
        //multiple catch clauses to handle them
        //see note below
    }
    catch(const std::exception& e)
    {
        //This is boiler plate provided by
        //extension.  You can use anything you wish
        //
        std::cerr << e.what() << '\n';

        //My error routine
        //e is an object with one method
        std::cout << "Error message: " << e.what() << std::endl;
    }
    //THERE CAN BE MORE THAN ONE CATCH CLAUSE

    return 0;
    
}