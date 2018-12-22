// File: ReverseNumber.cpp
// Date: December 21st, 2018
// Author: Victor Oliveros
// Purpose: SoloLearn
// Github.com/Victoroliveros

// Program To Reverse Numbers

#include <iostream>

using namespace std;

int main() {

    //Declare Variables
    int r, number,reverse=0;
    
    //User Input
    cout << "Enter a number.[Ex: 54]: " << endl;
    cin >> number;
    cout << "The number you entered is " << number << "." << endl;
    
    
    //Calculation
    while (number>0)
    {
        r= number % 10;
        reverse = reverse * 10 + r;
        number = number / 10;
    } 
    
   //Display Results
   cout << "The reverse of is " << reverse << "!" << endl;
    
    return 0;
}
