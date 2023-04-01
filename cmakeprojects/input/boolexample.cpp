#ifndef STD_INCLUDES
#define STD_INCLUDES
    #include <iostream>
    #include <string>
    #include <cmath>
#endif

class BoolExample{

 public:
    void OldEnough(void){
        int myAge = 25;
        int votingAge = 18;

            if (myAge >= votingAge) {
                std::cout << "Old enough to vote!" << std::endl;
            } else {
                std::cout << "Not old enough to vote." << std::endl;
            }
        }


    // Outputs: Old enough to vote!
};
