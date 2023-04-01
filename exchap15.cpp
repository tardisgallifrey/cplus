#include <iostream>
#include <string>


int main(){

    double arr[5] = { 1.23, 2.45, 8.52, 6.3, 10.15 };

    //This is more clear, reserve one double
    double *d = (double*)malloc(sizeof(double) * 1);
    *d = 3.14;

    arr[0] = 2.56;
    arr[4] = 3.14;

    std::cout << "The first array element is: " << arr[0] << std::endl;
    std::cout << "The last array element is: " << arr[4] << std::endl;

    free(d);

    //Strings
    std::string s1 = "Hello";
    std::string s2 = " World";
    std::string s3 = s1 + s2;
    std::cout << s3 << std::endl;

    std::string fullname;
    std::cout << "Please enter the first and last name: ";
    std::getline(std::cin, fullname);
    std::cout << "Your name is: " << fullname << std::endl;

    //substrings
    fullname = "John Doe";
    //substring, start at pos 0, give me four chars
    std::string firstname = fullname.substr(0, 4);
    //substring, start at pos 5, give me three chars
    std::string lastname = fullname.substr(5, 3);
    std::cout << "Fullname: " << fullname << std::endl;
    std::cout << "First Name: " << firstname << std::endl;
    std::cout << "Last Name: " << lastname << std::endl;

    //find a char
    auto characterfound = fullname.find('n');
    if( characterfound != std::string::npos ){
        std::cout << "Character n found at pos: " << characterfound << std::endl;
        std::cout << " in string: " << fullname << std::endl;

    }else{
        std::cout << "Character not found." << std::endl;
    }


}