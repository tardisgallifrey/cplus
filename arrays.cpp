#include <iostream>

int main(){

    int arr[5] = { 10, 20, 30, 40, 50 };
    arr[0] = 100;
    arr[4] = 100;
    

    //prints address of array (beginning, I hope)
    std::cout << arr << std::endl;

    //to print array requires a loop

    for( int count; count < sizeof(arr)/sizeof(*arr); count++){
        std::cout << arr[count] << ", ";
    }

    std::cout << std::endl;



    return 0;
}