#include <fstream>
#include <iostream>
#include <string>
 
// fstream has std::ifstream for input
// and std::ofstream for output,
// but you can use std::fstream??
// Not sure why. Requires more work and care.

int main () {

    //Original tutorial used a character array
    //it did not use <string> library
    //Therefore, (read further down page)
   //char data[100];
   std::string data;

   // open a file in write mode.
   //second args in open() can be optional, but more clear
   //These are possibilities
   // std::ios::out -- open for write
   // std::ios::out -- open for write, truncate/clear file
   // std::ios::app -- open for append/write
   // std::ios::ate -- open for write, move pointer to EOF
   // OR '|' these together as needed
   std::ofstream outfile;
   outfile.open("afile.dat", std::ios::out|std::ios::trunc);

   std::cout << "Writing to the file" << std::endl;
   std::cout << "Enter your name: "; 
   //app required use of cin.getline()
   //std::cin.getline(data, 100);

   //This works now, but only because I made 'data'
   //from a string object.
   //If I try to use the char data, the 'std' fails
   //because this only works with string objects
   std::getline(std::cin, data);

   // write inputted data into the file.
   outfile << data << std::endl;

   std::cout << "Enter your age: "; 
   std::cin >> data;
   std::cin.ignore();
   
   // again write inputted data into the file.
   outfile << data << std::endl;

   // close the opened file.
   outfile.close();

   // open a file in read mode.
   std::ifstream infile; 
   //second arg optional
   infile.open("afile.dat", std::ios::in); 
 
   std::cout << "Reading from the file" << std::endl; 
   infile >> data; 

   // write the data at the screen.
   std::cout << data << std::endl;
   
   // again read the data from the file and display it.
   infile >> data; 
   std::cout << data << std::endl; 

   // close the opened file.
   infile.close();

   return 0;
}