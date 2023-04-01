#ifndef STD_INCLUDES
#define STD_INCLUDES
    #include <iostream>
    #include <string>           //needed for strings
    #include <cmath>            //needed for math functions

#endif

class Loops{
    public:

        //While loop
        void loopWhile(void){

            std::cout << "A While Loop" << std::endl;
            int i = 10;

            while(i > 0){
                std::cout << i << ' ';
                i--; //while and do/while require increment/decrement operation
            }

            std::cout << std::endl;
        }

        //do/while loop
        //while loops may never run
        //do/while loops always run once
        void doWhileLoop(void){
            std::cout << "A do/while loop." << std::endl;

            int i = 0;

            do{
                std::cout << i << ' ';
                i++;
            }while(i < 11);

            std::cout << std::endl;
        }

        //for loops
        //Could be inifinite loops (;;)
        void forLoop(void){
            std::cout << "A for loop." << std::endl;

        //common in for loops to declare and set
        //counter inside the for declaration
        //while can do that as well,
        //but not do/while
            for(int i = 0; i < 11; i++){
                std::cout << i << ' ';
            }
            std::cout << std::endl;
        }

        //use of break in loops
        //using a for, but similar in all loops
        void useBreak(void){
            std::cout << "use of break in loop." << std::endl;

            for(int count = 0; count < 10; count++){
                if(count > 5){
                    break; //breaks at 6
                }
                std::cout << count << ' ';
            }
            std::cout << std::endl;
        }

        void useContinue(void){
            std::cout << "use of continue in loop" << std::endl;
            std::cout << "it skips the value" << std::endl;

            for(int count = 0; count < 10; count++){
                if(count == 5){
                    continue;
                }
                std::cout << count << ' ';
            }
            std::cout << std::endl;
        }

//end of class
};