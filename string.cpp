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

    std::cout << s.at(3) << std::endl;
    std::cout << s2[3] << std::endl;

    std::cout << "Give your response: ";
    std::string response;
    std::getline(std::cin, response);   //This is new. Getting string input
    
    //If you don't use getline/cin, the strings won't be equal
    if(response != "I'm fine")
    {
        std::cout << "You didn't answer I'm fine. Is something wrong?" << std::endl;
    }
    else
    {
        std::cout << "Great! Glad to hear that." << std::endl;
        std::cout << "You entered: " << response.c_str() << std::endl;
        // .c_str() is a method that returns a pointer to first character of string
        
    }

}