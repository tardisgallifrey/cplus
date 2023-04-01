//Modern C++ book
#include <iostream>

int main()
{

    std::cout << "Please enter an integer and a float. Press enter after each one." << std::endl;
    int x = 0;
    float y = 0.0;

    //For cin, the arrows go to the right instead of left.
    std::cin >> x >> y;
    std::cout << "You entered: " << x << " and " << y << std::endl;
    
}