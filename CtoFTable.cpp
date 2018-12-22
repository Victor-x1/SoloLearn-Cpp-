// File: CtoFTable.cpp
// Date: December 21st, 2018
// Author: Victor Oliveros
// Purpose: SoloLearn
// Github.com/Victoroliveros

/*
This program displays the temperature Celsius and converts it to Fahrenheit
in a table.The Default Program converts 0 to 20 Degrees Celsius to Fahrenheit. 
You might have to hit Run twice.
*/

#include <iostream>
#include <iomanip> // Needed for SetPrecision [2 Decimals]

using namespace std;

int main(int argc, char** argv) {

    //Declare Variables
    //Max Celsius Value is 20 [ Default]
    //CHANGE 20 to Different Number To Change Table Results
    int cls = 20; // 
  
    //Program Intro Text
    cout << "Celsius to Fahrenheit Table 1.2" << endl;
    

    //Celsius to Fahrenheit Table Titles
    cout << "Celsius" << "\t\t\t" << "Fahrenheit" << endl;
    cout << "-------------------------------" << endl;

    //Celsius to Fahrenheit Loop
    for (int i = 0; i <= cls; i++) 
    {
        
    //Celsius to Fahrenheit Conversion 
        float f = ((i * 1.8) + 32);
        
        
    // Celsius to Fahrenheit Table 
    //Note: SetPrecision(2) sets Result to Two Decimal Places.
        cout << i << " C" << "\t\t\t" << fixed << setprecision(2) << f << " F" << endl;
    }
    
        return 0;
}

