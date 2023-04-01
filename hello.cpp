//Modern C++ book

//Needed to use std::cout
#include <iostream>

//main always should return an int.eger
int  main()
{
    //This is a comment, single line
    std::cout << "Hello World." << std::endl;

    /* Multi line comments are like this */
    std::cout << "This is a multiple "  << "string output" << std::endl;

    //Also legal
    std::cout << "This uses a newline.\n";

    //Also legal
    std::cout << "This is line one.\nThis is line two."<< std::endl;

    //Fundamental types
    bool mytrigger = true;  //boolean
    int myint = 123;        //integer
    double mydouble = 123.12;    //double float
    float myfloat = 123.12;     //float
    char c = 'a';           //character

    //useage
    std::cout << "The value of myint is: " << myint << std::endl;
    std::cout << "The value of variable c: " << c << std::endl;

    std::cout << "The size of an integer is: "  << sizeof(int) << std::endl;
    std::cout << "The size of a character is: " << sizeof(char) << std::endl;

    //char is just a special integer
    c = 97;
    std::cout << "The value of c is: " << c << std::endl;
}