#ifndef STD_INCLUDES
#define STD_INCLUDES
    #include <iostream>
    #include <string>           //needed for strings
    #include <cmath>            //needed for math functions
    
#endif

class Switch{

    //Switch/Case format
    //don't forget to use break
    //don't forget a default case

    public:

        void Days(void){
            int day = 4;

            switch (day) {
                case 1:  //empty cases are allowed
                            //Anything four or less is 
                            //performed by case 4
                case 2:
                case 3:
                case 4:
                    std::cout << "Today is Thursday" << std::endl;
                    break; //leave out a break and you'll fall through
                            //to the next case
                case 5:
                    std::cout << "Today is Friday" << std::endl;
                    break;
                case 6:
                    std::cout << "Today is Saturday" << std::endl;
                    break;
                case 7:
                    std::cout << "Today is Sunday" << std::endl;
                    break;
                default:
                    std::cout << "Looking forward to the Weekend" << std::endl;
            }
        }
    // Outputs "Looking forward to the Weekend"
};