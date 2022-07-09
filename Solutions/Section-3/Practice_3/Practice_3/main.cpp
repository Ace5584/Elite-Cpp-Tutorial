/*
 --------------------------------------------------------------------------------
 Section 3 Practice 3
 [Carpet Cleaning Company]
 
 Task Description:
 Write a program that Takes in the number of small and big rooms from the customer
 and outputs a cost and tax in dollars. Here are the guidelines you have to follow:
    - Charge Small room for $25
    - Charge Large room For $35
    - Sales Tax 6%
    - Estimate is valid for 30 days

 Your output should be like this:
 Estimate for carpet cleaning survice
 Number of small rooms: 2
 Number of large rooms: 1
 price per small room: $25
 price per large room: $35
 Cost: $85
 Tax: $5.1
 ==============================
 Total estimate cost: $90.1
 Estimate is valid for 30 days
 Program ended with exit code: 0
 
 --------------------------------------------------------------------------------
 */

#include <iostream>

using namespace std;

int main(){
    const int smallRoomPrice = 25;
    const int largeRoomPrice = 35;
    const float taxPercentage = 0.06;
    cout << "Estimate for carpet cleaning survice\n";
    
    int numSmallRooms;
    int numLargeRooms;
    cout << "Number of small rooms: ";
    cin >> numSmallRooms;
    cout << "Number of large rooms: ";
    cin >> numLargeRooms;
    cout << "price per small room: $25\n";
    cout << "price per large room: $35\n";
    
    int totalCost = smallRoomPrice * numSmallRooms + largeRoomPrice * numLargeRooms;
    cout << "Cost: $" << totalCost << "\n";
    
    float tax = taxPercentage * totalCost;
    cout << "Tax: $" << tax << "\n";
    
    cout << "==============================\n";
    
    float incTaxCost = totalCost + tax;
    cout << "Total estimate cost: $" << incTaxCost << "\n";
    cout << "Estimate is valid for 30 days" << "\n";
    
    return 0;
}
