#include <filesystem> //needed for folders
#include <fstream>
#include <iostream>
#include <string>


int main()
{
    for (auto& file : std::filesystem::directory_iterator{ "." })  //loop through the current folder
    {
        //std::ifstream fs{ file.path() };    //open the file
        //or because directory_entry is implicit converted to a path, so you can do 
        //std::ifstream fs{ file };
        //... process the file
        std::string filename = file.path();

        std::cout << filename.substr( 2, filename.length()) << std::endl;


    }
}