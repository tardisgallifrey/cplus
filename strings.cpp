#include <iostream>
#include <string>

//#define does not get semi-colons
#define NOT_FOUND -1

int main(void)
{
    //Since strings are truly objects,
    //they have built-in methods, such as c_str(), at(int)
    std::string mystring = "Hello World!";

    char *c1 = &mystring[0];    //points to first element 'H'
    char *c2 = &mystring.at(0);  //Same as above

    char *c3 = &mystring[6];
    char *c4 = &mystring[6];

    std::cout << "First element: " << *c1 << " " << *c2 << std::endl;
    std::cout << "Sixth element: " << *c3 << " " << *c4 << std:: endl;
    std::cout << "of the string object: " << mystring << std::endl;

    //comparing strings
    std::string s1 = "Hello";
    std::string s2 = "World";

    if(s1 == s2){
        std::cout << "Both s1 and s2 are equal." << std::endl;
    }
    else{
        std::cout << "Strings s1 and s2 are not equal." << std::endl;
    }

    //getting string input
    std::string s;
    std::cout << "Please enter a string: ";
    std::getline(std::cin, s);    //Similar to Java
    std::cout << "You entered:  " << s << std::endl;

    //c_str() method in stringptr.cpp

    //substrings method
    //Unlike some others, use of a string literal
    //to get a substring is difficult
    s = "Hello World";
    std::string mysubstring = s.substr(6,5);
    std::cout << "slice is: " << mysubstring << std::endl;

    //String find method
    //find() returns a size_type position value
    //where the substring starts
    std::string::size_type found = s.find("Hello");

    //npos is a buil-in constant meaning
    //"NOT FOUND"
    if(found != std::string::npos){
        std::cout << "Substring found at position: " << found << std::endl;
        //Simply printed substring from found to end of string
        std::cout << "Substring is: " << s.substr(found, -1) << std::endl;
    }
    else{
        std::cout << "The substring is not found." << std::endl;
    }

    //programmer can make their own constants that work
    //just fine
    //Important: size_type returns position or -1 if not found
    if(found != NOT_FOUND){
        std::cout << "Yep NOT_FOUND works, too." << std::endl;
    }

    //find() also works this way
    s = "Hello C++ World.";
    mysubstring = "C++";
    std::cout << "Substring is: " << s.find(mysubstring) << std::endl;


    return 0;
}