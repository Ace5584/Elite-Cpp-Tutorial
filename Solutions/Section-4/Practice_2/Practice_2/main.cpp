/*
 --------------------------------------------------------------------------------
 Section 4 Practice 2
 [Master of Vectors]
 
 Task Description:
 write a program that follows:
 
     - Declare 2 variables of integer name vector1 & vector2
     - add 10 & 20 to vector1 using push_back
     - Display the the elements in vector1 using at() and size()
     - add 100 & 200 to vector2 using push_back
     - Display the the elements in vector2 using at() and size()

     - Declare a 2d vector call vector_2d that's an integer
     - add vector1 && vector2 to vector_2d using push_back
     - Display the element of vector_2d using at()
     - change vetor1 index of 0 to 1000
     - Display the vector_2d using .at()
     - Display the value of vector1 using .at()
 
 Your program should output:
 Vector1: 10 , 20
 The size of the vector is: 2
 Vector2: 10 , 20
 The size of the vector is: 2
 vector 2D 0, 0: 10
 vector 2D 0, 1: 20
 vector 2D 1, 0: 10
 vector 2D 1, 1: 20
 The size of vector_2d: 2
 After changing the value1 of vector1:
 vector 2D 0, 0: 10
 vector 2D 0, 1: 20
 vector 2D 1, 0: 10
 vector 2D 1, 1: 20
 The size of vector_2d: 2
 The value of vector1: 1000
 Program ended with exit code: 0
 
 --------------------------------------------------------------------------------
 */

#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector <int> vector1;
    vector1.push_back(10);
    vector1.push_back(20);
    cout << "Vector1: " << vector1[0] << " , " << vector1[1] << endl
    << "The size of the vector is: " << size(vector1) << endl;
    
    vector <int> vector2;
    vector2.push_back(100);
    vector2.push_back(200);
    cout << "Vector2: " << vector2[0] << " , " << vector2[1] << endl
    << "The size of the vector is: " << size(vector1) << endl;
    
    vector <vector<int>> vector2d;
    vector2d.push_back(vector1);
    vector2d.push_back(vector2);
    
    cout << "vector 2D 0, 0: " << vector2d.at(0).at(0) << endl
    << "vector 2D 0, 1: " << vector2d.at(0).at(1) << endl
    << "vector 2D 1, 0: " << vector2d.at(1).at(0) << endl
    << "vector 2D 1, 1: " << vector2d.at(1).at(1) << endl
    << "The size of vector_2d: " << size(vector2d) << endl;
    
    cout << "After changing the value1 of vector1:" << endl;
    vector1.at(0) = 1000;
    cout << "vector 2D 0, 0: " << vector2d.at(0).at(0) << endl
    << "vector 2D 0, 1: " << vector2d.at(0).at(1) << endl
    << "vector 2D 1, 0: " << vector2d.at(1).at(0) << endl
    << "vector 2D 1, 1: " << vector2d.at(1).at(1) << endl
    << "The size of vector_2d: " << size(vector2d) << endl;
    cout << "The value of vector1: " << vector1.at(0) << "\n";
    
    
    return 0;
}


