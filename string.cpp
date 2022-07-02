//Modern C++ book
#include <iostream>
#include <string> //needed for strings

int main()
{
    char exclamation = '!';
    std::string s2 = "  How are you?";

    std::string s = "Hello";  //create string
    s += ", Dave.";                 //concatenate string
    s += exclamation;               //concat character variable
    std::string s3 = s + s2;

    std::cout << s3 << std::endl;

}