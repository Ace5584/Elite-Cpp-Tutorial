/*
 --------------------------------------------------------------------------------
 Section 5 Practice 1
 [Currency Converter]
 
 Task Description:
 write a program that converts AUD to USD using this conversion rate:
    - 1 AUD = 0.69 USD
 
 Your output should be like this:
 Enter AUD: 100
 100 AUD is 69 USD
 Program ended with exit code: 0
 
 --------------------------------------------------------------------------------
 */

#include <iostream>

using namespace std;

int main(){
    
    double aud;
    double usd;
    const double convRate = 0.69;
    
    cout << "Enter AUD: ";
    cin >> aud;
    usd = convRate * aud;
    cout << aud << " AUD is " << usd << " USD" << endl;
    
    
    return 0;
}

