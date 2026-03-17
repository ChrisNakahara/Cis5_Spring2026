/* 
 * File:   main.cpp
 * Author: Christopher Nakahara
 * Created on March 16, 8:00pm
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
    float hrPay,grsPay,OTPay,hours;
    //Initialize or input i.e. set variable values
    cout << "This program calculates the gross paycheck." << endl;
    //Map inputs -> outputs
    cout << "Input the pay rate in $'s/hr and the number of hours." << endl;
    cin >> hrPay >> hours;
    if (hours > 40)
    {
        OTPay = (hours - 40) * hrPay * 2; 
        grsPay = hrPay * 40 +OTPay;
    }
    else 
    {
        grsPay = hrPay * hours;
    }
    //Display the outputs
    cout << fixed << setprecision(2) << "Paycheck = $ " << grsPay;
    //Exit stage right or left!
    return 0;
}