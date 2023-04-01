#include <iostream>

//print all arguments from command line

int main(int argc, char** argv)
{

    if(argc < 2 )
    {
        std::cout << "You didn't give any arguments." << std::endl;
    }
    else
    {
        for(int i = 0; i < argc; i++)
        {
            std::cout << argv[i] << std::endl;
        }
    }
}