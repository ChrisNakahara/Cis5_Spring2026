/* 
 * File:   main.cpp
 * Author: Christopher Nakahara
 * Created on March 16, 9:22pm
 * Purpose:  Creation of Template to be used for all
 *           future projects
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include<iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float oldSal, newSal, nwMnSal, retPay,payIncr = 1.076;
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    cout << "Input previous annual salary." << endl;
    cin >> oldSal;
    newSal = oldSal * payIncr; // calc new salary
    nwMnSal = newSal/12; // calc new monthly salary
    retPay = (newSal - oldSal) /2;
    //Display the outputs
    cout << "Retroactive pay    = $  " << fixed << setprecision(2) << retPay << endl;
    cout << "New annual salary  = $" << newSal << endl;
    cout << "New monthly salary = $ " << nwMnSal;
    //Exit stage right or left!
    return 0;
}