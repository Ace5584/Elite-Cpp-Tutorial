/*
 --------------------------------------------------------------------------------
 Section 4 Practice 1
 [Master of arrays]
 
 Task Description:
 write a program that follows:
     - Declare an array with 20, 40, 60 and 80 in this order
     - Display first and third array in one line
     - Display second and last array in another line
     
     - Create a 2d array with 1, 2, 3, 4 in the first dimention and 5, 6, 7, 8
       in the second
     - Display the first item of the second part of the 2d array
     - Display the first item of the first part of the 2d array
 
 Your output should be like this:
 20 60
 40 80
 5
 1
 Program ended with exit code: 0
 
 --------------------------------------------------------------------------------
 */

#include <iostream>

using namespace std;

int main(){
    
    int arr_1[4] = {20, 40, 60, 80};
    cout << arr_1[0] << " " << arr_1[2] << "\n";
    cout << arr_1[1] << " " << arr_1[3] << "\n";
    
    int arr_2[2][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8}
    };

    cout << arr_2[1][0] << "\n";
    cout << arr_2[0][0] << "\n";
    
    
    return 0;
}

