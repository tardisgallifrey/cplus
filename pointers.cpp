#include <iostream>
#include <string.h>

//These will be used in malloc()
//they create proper space for values
//Not certain of integers, but Chars need the \0 on the end.
#define INTEGER 1
#define CHAR 2

int main(void)
{
    //The book shows two versions (p, a),
    //But bottom versions work fine.
    int* p;
    int *q;

    char* a;
    char *b;

    int num;
    char mychar;

    //Pointers MUST ALWAYS point to an address in memory
    //declaring a pointer DOES NOT point them to memory locations
    //The following is the standard method
    //It requires an intermediary variable of the same type
    //Inefficient in my view
    p = &num;
    q = &num;

    a = &mychar;
    b = &mychar;

    num = 10;
    mychar = 'B';

    std::cout << "Pointers point to: " << *p << " " << *q << std::endl;
    std::cout << "Char ptrs point to: " << *a << " " << *b << std::endl;
    
    //Use of malloc sets aside space in memory,
    //and points the pointer to that space.
    //No intermediary variable is required.
    //Also can use sizeof() to get size
    int *x = (int*)malloc(INTEGER);
    int *y = (int*)malloc(sizeof(int32_t));

    char *v = (char*)malloc(CHAR);
    char *t = (char*)malloc(sizeof(char));

    //Now you can assign values to pointers
    //without going through variables.
    *x = 13;
    *y = 20;

    *v = 'V';
    *t = 'T';


    std::cout << "Pointers point to: " << *x << " " << *y << std::endl;
    std::cout << "Char ptrs point to: " << *v << " " << *t << std::endl;
    
    //always free malloc
    free(x);
    free(y);
    free(v);
    free(t);
    return 0;
}