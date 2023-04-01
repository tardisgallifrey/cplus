#include <iostream>
#include <vector>
#include <array>
#include <set>
#include <map>
#include <utility>  //for pairs

int main(int argc, char *argv[]){

    std::vector v = {1, 2, 4, 6};
    v.push_back(10);

    std::cout << "The third element is: " << v[2] << std::endl;
    std::cout << "The third element is: " << v.at(2) << std::endl;
    std::cout << "The vector's size is: " << v.size() << " elements." << std::endl;

    //std::array
    std::array<int, 5> arr = {1, 2, 3, 4, 5};

    for( auto element : arr){
        std::cout << element << std::endl;
    }

    //std::set
    //While set will allow you to have a non-unique item,
    //Set will not allow you to use it.
    //The second three in the following set does not print.
    //For sets that can have non-unique elements, use std::multiset
    std::set<int> myset = { 1, 2, 3, 3, 4, 5};
    myset.insert(10);
    myset.insert(42);
    for( auto element : myset){
        std::cout << element << std::endl;
    }

    //std::map key/value pairs
    //std::map is the same as set and has a multimap cousin
    std::map<int, std::string> namelist = { {1, "Dave"}, {2, "Janice"}, {3, "Krys"}};
    for( auto element : namelist){
        std::cout << element.first << " " << element.second << std::endl;
    }

    //find key #2 in namelist.  Load iterator into it
    auto it = namelist.find(5);

    //if not found, find will return end() of map
    if( it != namelist.end()){
        std::cout << "Found: " << it->first << " " << it->second << std::endl;
    }else
    {
        std::cout << "Not Found!" << std::endl;
    }

    //Pair, really, only a pair, no more
    std::pair<int, double> mypair = {123, 3.14};
    std::cout << "The pair contains: " << mypair.first << " and " << mypair.second << std::endl;

    //alternate method to make pair
    std::pair<int, double> mypair2 = std::make_pair(123, 3.14);
    return 0;
}