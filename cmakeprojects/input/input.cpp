#include <iostream>
#include <string>   //needed for string object
#include <cmath>    //needed for math functions

//all main functions return int
//void is for not using command line args
int main(void)
{

    //DO NOT USE NAMESPACE ANY MORE
    //all items prefaced by namespace
    //for string, cout, cin it is std::
    //This represents, I think standard library
    std::string firstname;

    //send a prompt to screen (arrows into cout)
    std::cout << "Enter your first name: ";

    //ask for input (arrows into variable)
    std::cin >> firstname;

    //print results, interpolate variable
    //and use end of line (endl)
    std::cout << "Your first name is: " << firstname << std::endl;

    //Another way to input a string, but it has a problem
    std::string fullname;
    std::cout << "Enter your full name: ";
    std::cin >> fullname;
    std::cout << "Your name is: " << fullname << std::endl;
    //cin stops taking input at first space
    //it won't print full name, only first name

    //required to clear STDIN of data
    //failure to do so causes problems with
    //getline()
    std::cin.ignore(1000, '\n');


    //better method for string input
    //re-using fullname.  Already declared once
    std::cout << "Enter your fullname: ";
    //use getline to keep all of the string
    std::getline(std::cin, fullname);

    //Now we get full string
    std::cout << "Your full name is: " << fullname << std::endl;

    //built in math functions
    std::cout << "The greater of 2 and 5 is: " << std::max(2, 5) << std::endl;
    std::cout << "The lesser of 2 and 5 is: " << std::min(2, 5) << std::endl;

    //cmath functions
    std::cout << "Square root of 64: " << std::sqrt(64) << std::endl;
    std::cout << "Rounding 2.6: " << std::round(2.6) << std::endl;
    std::cout << "Log of 2: " << std::log(2) << std::endl;
    
    
    
    
    
    //always return a value, preferably zero
    return 0;
}