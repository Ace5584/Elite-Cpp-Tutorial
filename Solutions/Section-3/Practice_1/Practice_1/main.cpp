/*
 --------------------------------------------------------------------------------
 Section 3 Practice 1
 [Data Types]
 
 Task Description:
 Write a program that inputs a integer, a double and then a string. And then print
 them out. Make sure you are using the correct variable names
 
 Your output shouhld be like this:
 Enter your integer: 1
 Enter your double: 6.7
 Enter your string: Hello
 1
 6.7
 Hello
 Program ended with exit code: 0
 --------------------------------------------------------------------------------
 */

#include <iostream>

using namespace std;

int main(){
    
    int wholeNum;
    double dbl;
    string str;
    
    cout << "Enter your integer: ";
    cin >> wholeNum;
    cout << "Enter your double: ";
    cin >> dbl;
    cout << "Enter your string: ";
    cin >> str;
    
    cout << wholeNum << "\n" << dbl << "\n" << str << "\n";
    
    return 0;
}
