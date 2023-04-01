#include <iostream>
#include <vector>
#include <iterator>


int main(int argc, char *argv[])
{

    char smalloption[20];
    std::vector<std::string> option;

    for( int i = 0; i < argc; i++)
    {
        option.push_back(argv[i]);
    }

    for( auto element : option)
    {

        if( element.at(1) == '-')
        {
            std::cout << element << " is full word option." << std::endl;
        }
        else
        {
            for( int i = 1; i < element.size(); i++ )
            {
                if( element.at(0) == '.' || element.at(0) == '/' ) break;

                smalloption[i] = element.at(i);
                std::cout << smalloption[i] << " ";
            }
            std::cout << std::endl;
        }
    }
    std ::cout<<std :: endl;

    return 0;
}