#include <iostream>
#include <string>

int main(void)
{
    std::string s = "Hello World!\n";

    //c_str method returns pointer to first char
    //in string s.  Useful when function requires
    //char* instead of string.
    std::cout << s.c_str();
}