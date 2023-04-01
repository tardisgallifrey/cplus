#include <iostream>
#include <vector>
#include <algorithm>

//Sorting and more


int main(int argc, char *argv[])
{
    std::vector<int> v = { 1, 0, 50, 3, 200, 121 };
    std::vector<int> copyv(6); //vector to copy to

    //to sort in ascending order
    //You can specify start and stop that aren't begin and end
    std::sort(v.begin(), v.end());

    for(auto element : v)
    {
        std::cout << element << std::endl;
    }

    //To sort in descending
    std::sort(v.begin(), v.end(), std::greater<int>());
    for(auto element : v)
    {
        std::cout << element << std::endl;
    }

    //Find the number 3 in our vector
    auto result = std::find(v.begin(), v.end(), 3);

    //remember that std::find returns a pointer to an object
    //which contains our find
    if(result != v.end())
    {
        std::cout << "element is found: " << *result << std::endl;
    }

    //To copy a vector:
    std::copy(v.begin(), v.end(), copyv.begin());

    for( auto element : copyv )
    {
        std::cout << element << std::endl;
    }

    //Find max, min is similar
    auto it2 = std::max_element(v.begin(), v.end());

    std::cout << "Max element of vector is: " << *it2 << std::endl;

    return 0;
}