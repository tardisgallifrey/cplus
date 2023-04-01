#include <iostream>
#include <vector>
#include <array>
#include <set>
#include <map>
#include <utility>

int main(int argc, char *argv[]){

    //for( : ) acts like foreach in other languages
    //Straightforward mostly for( this in that)
    //the colon is "in"

    //Strings must be done a little different.
    //Strings should use a constant item variable
    std::vector<std::string> phrase = {"How", "now", "brown", "cow"};

    //use of &(reference) means you are acting upon actual members
    for(const auto& word : phrase){
        std::cout << word << " ";
    }
    std::cout << std::endl;

    //Begin and End, iterators
    std::vector<int> v = {1, 2, 3, 4, 5, 6};

    //regular for loop
    for(auto it = v.begin(); it != v.end(); it++)
    {
        //Remember that begin and end return pointers to location
        //end() is not the last element, but one past last element
        //It is the END!
        std::cout << *it << std::endl;
    }

    //Use of begin and erase
    std::vector<int> v1 = {1, 2, 3, 4, 5, 6};

    auto it = v1.begin() + 3; //point to third position
    v1.erase(it);            //erase value at that position

    for( auto element : v1)
    {
        std::cout << element << std::endl;
    }

    //Wrote this myself
    v1.insert(v1.begin() + 3, 8);

    for( auto element : v1)
    {
        std::cout << element << std::endl;
    }

    return 0;
}