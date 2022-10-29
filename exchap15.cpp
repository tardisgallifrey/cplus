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

}