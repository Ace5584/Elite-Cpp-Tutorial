/*
 --------------------------------------------------------------------------------
 Section 3 Practice 2
 [Bools and Floats]
 
 Task Description:
 Write a program that takes in a decimal and a boolean as 0 and 1 and prints it
 out labeling the boolean value
 
 Your output shouhld be like this:
 Enter a decimal: 38.282
 Enter a boolean (0 is false, anything else is true): 0
 38.282
 0
 Program ended with exit code: 0
 --------------------------------------------------------------------------------
 */

#include <iostream>

using namespace std;

int main(){
    float num;
    bool val;
    
    
    cout << "Enter a decimal: ";
    cin >> num;
    cout << "Enter a boolean (0 is false, anything else is true): ";
    cin >> val;
    
    cout << num << "\n";
    cout << val << "\n";
    
    
    return 0;
    
    
}

