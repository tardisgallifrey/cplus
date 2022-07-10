#include <iostream>
#include <string>

int main(void)
{
    //auto type deduces variable type from right side
    auto c = 100;  //c is an int
    auto d = 10.0 / 3.14;  //d should be a float or double

    const auto e = 2000;   //works with const as well

    auto &g = "How now.";  //works with reference variables too.
    auto *p = g;           //works with pointers, I think

    std::cout << c << std::endl;
    std::cout << d << std::endl;
    std::cout << e << std::endl;
    std::cout << g << std::endl;
    std::cout << p << std::endl;

}