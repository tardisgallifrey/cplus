#ifndef STD_INCLUDES
#define STD_INCLUDES
    #include <iostream>
    #include <string>           //needed for strings
    #include <cmath>            //needed for math functions
    #include "boolexample.cpp"  //klugey, but I'll do it
    #include "switch.cpp"       //switch/case
    #include "loops.cpp"        //loops
#endif

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
    
    //Booleans
    bool isCodingFun = true;
    bool isFishTasty = false;
    std::cout << isCodingFun << std::endl;  // Outputs 1 (true)
    std::cout << isFishTasty << std::endl;  // Outputs 0 (false)
    
    //Better use of bools is in boolean statements
    int x = 10;
    int y = 9;
    std::cout << (x > y) << std::endl; // returns 1 (true), because 10 is higher than 9
    
    BoolExample example = BoolExample();

    example.OldEnough();

    Switch days = Switch();

    days.Days();

    Loops example2 = Loops();

    example2.loopWhile();

    example2.doWhileLoop();

    example2.forLoop();

    example2.useBreak();

    example2.useContinue();

    //always return a value, preferably zero
    return 0;
}