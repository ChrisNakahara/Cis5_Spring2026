/* 
 * File:   Gaddis_9thEd_Chap4_Prob11_Books.cpp
 * Author: Chris Nakahara
 * Created on March 19, 2026, 12:00 PM
 * Purpose:  Creation of Template to be used for all
 *           future projects
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    int numBoks,points;
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    cout << "Book Worm Points" << endl << "Input the number of books purchased this month." << endl;
    cin >> numBoks;
    //Display the outputs
    if (numBoks >= 4)
    {
        points = 60;
    }
    else if (numBoks == 3 )
    {
        points = 30;
    }
    else if (numBoks == 2 )
    {
        points = 15;
    }
    else if (numBoks == 1 )
    {
        points = 5;
    }
    else 
    {
        points = 0;
    }
    cout << "Books purchased" << " = " << setw(2) << numBoks << endl << "Points earned  " << " = " << points;
    //Exit stage right or left! 
    return 0;
}