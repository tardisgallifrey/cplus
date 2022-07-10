#include <iostream>
#include <string.h>

int main(void)
{
    //The book shows top versions (p, a),
    //But bottom versions work fine.
    int* p;
    int *q;

    char* a;
    char *b;

    int num;
    char mychar;

    p = &num;
    q = &num;

    a = &mychar;
    b = &mychar;

    num = 10;
    mychar = 'B';

    std::cout << "Pointers point to: " << *p << " " << *q << std::endl;
    std::cout << "Char ptrs point to: " << *a << " " << *b << std::endl;
    return 0;
}