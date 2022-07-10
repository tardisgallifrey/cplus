#include <iostream>
#include <string>

//These functions do not return values

//pass by value or copy the value
void func1( int x);

//pass by reference
void func2( int& x);

//pass by pointer
void func3( int *p );

//preferred so that argument cannot be changed
void func4( const int& x);

//function overloading
//Function has same same, but different params
//C++ will choose proper function based on param type
void myprint(char param);
void myprint(int param);
void myprint(double param);
void myprint(std::string param);
void myprint(int param, double param2);


int main(void)
{

    int mynum = 123;
    int *a_num;

    func1(mynum);

    func2(mynum);
    std::cout << "mynum after pass by reference: " << mynum << std::endl;

    mynum = 123;
    //when passing a non-pointer to a pointer
    func3( &mynum );

    //OR, this way.  Pass a pointer
    a_num = &mynum;
    func3(a_num);

    func4(mynum);

    //overloading
    myprint('B');
    myprint(15);
    myprint(15, 1.01);
    myprint(3.1417);

    //string is different
    //string literals are char* not strings
    std::string s = "Hello";
    myprint(s);

    return 0;

}

void func1( int x)
{
    std::cout << "Function returns: " << x << std::endl;
}

void func2( int& x ){
    x = 1234567;
    std::cout << "Function2 returns: " << x << std::endl;
}

void func3( int *p )
{
    std::cout << "Function3 returns: " << *p << std::endl;
}

void func4( const int& x )
{
    std::cout << "Function4 returns: " << x << std::endl;
}

void myprint(char param)
{
    std::cout << "Myprint returns: " << param << std::endl;
}

void myprint(int param)
{
    std::cout << "Myprint returns: " << param << std::endl;
}

void myprint(double param)
{
    std::cout << "Myprint returns: " << param << std::endl;
}

void myprint(std::string param)
{
    std::cout << "Myprint returns: " << param << std::endl;
}

void myprint(int param, double param2)
{
    std::cout << "Myprint returns: " << param << " " << param2 << std::endl;
}