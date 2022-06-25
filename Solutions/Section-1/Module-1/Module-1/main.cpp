/*
 --------------------------------------------------------------------------------
 Section 1 Module 1
 [Favourite Numbers!]
 
 Task Description:
 Write a program that reads in the user's favourite number, then print the number
 out.
 
 Your output shouhld be like this:
 Favourite Number: 9
 9
 
 Favourite Number: 17
 17
 --------------------------------------------------------------------------------
 */
#include <iostream>

int main(){
    int favNum = 0;
    std::cout << "Favourite Number: ";
    std::cin >> favNum;
    std::cout << favNum << "\n";
    return 0;
}
