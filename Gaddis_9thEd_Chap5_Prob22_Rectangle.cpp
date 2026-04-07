/* 
 * File:   main.cpp
 * Author: Chris Nakahara
 * Created on April 7, 2026, 11:20 AM
 * Purpose:  Creation of Template to be used for all
 *           future projects
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    short num;
    char letter;
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    cin >> num >> letter;
    //Display the outputs
    if (letter == 'x' || letter == 'X')
    {
        letter = 'X';
        for (int i = 0; i < num; i++)
        {          
            for (int i = 0; i < num; i++)
        {
            cout << letter;
        }
        if (i < num -1)
        {
            cout << endl;
        }
        }        
    }
    else if (letter == 'y' || letter == 'Y')
    {
        letter = 'Y';
        for (int i = 0; i < num; i++)
        {          
            for (int i = 0; i < num; i++)
        {
            cout << letter;
        }
        if (i < num -1)
        {
            cout << endl;
        }
        }
    }
    //Exit stage right or left!
    return 0;
}