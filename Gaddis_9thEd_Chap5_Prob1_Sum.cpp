/* 
 * File:   Gaddis_9thEd_Chap5_Prob1_Sum.cpp
 * Author: Chris Nakahara
 * Created March 25, 2026, 11:29 AM
 * Purpose:  Sum of intergers      
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
    int num,sum = 0;
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    cin >> num;
    if (num < 0) 
    {
        cout << "Please enter a positive number.";
    }
    else 
    {
        for (int i = 1; i <= num; i++)
        {
            sum += i;
        }
    }
    cout << "Sum = " << sum;
    //Display the outputs

    //Exit stage right or left!
    return 0;
}