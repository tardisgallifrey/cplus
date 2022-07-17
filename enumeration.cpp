#include <iostream>
#include <string>

//enumeration and classes

//unscoped enum
//avoid these
enum MyEnum
{
    //these are literally
    //values of 1, 2, 3, etc
    myfirst,
    mysecond,
    mythird,
    myfourth = 10  //can be assigned a value
};

//scoped enums
//use these instead
//we define a class of type? enum
//inherits type from int
//others can be used
enum class MyEnum2 : int
{

    myfirst,
    mysecond,
    mythird,
    myfourth = 10  //same rules here
};

//a real use
enum class Days : int
{
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday
};




int main(void)
{

    //declare new enum
    MyEnum myenum = myfirst;        //create and initialize enum

    //declare scoped enum
    MyEnum2 myenum2 = MyEnum2::myfirst;

    //declare the object
    Days dayofweek = Days::Friday;


    myenum = mysecond;  //can change value, but only of enum

    //switch case for dayof week
    //You are forever stuck with the 
    //class nomenclature Days::Monday
    //Monday by itself says not defined
    switch(dayofweek){
        case Days::Monday :
            std::cout << "Nobody likes Mondays." << std::endl;
            break;
        case Days::Tuesday :
        case Days::Wednesday :
        case Days::Thursday :
        case Days::Friday :
        case Days::Saturday :
        case Days::Sunday :
            std::cout << "Cool, it's not Monday" << std::endl;
            break;
        default:
            std::cout << "No day given" << std::endl;
            break;
    }
    return 0;
}