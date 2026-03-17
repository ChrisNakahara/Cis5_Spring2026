/* 
 * File:   main.cpp
 * Author: Christopher Nakahara
 * Created on March 16, 5:20pm
 * Purpose:  Creation of Template to be used for all
 *           future projects
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float degFer, degCel;
    //Initialize or input i.e. set variable values
    cout << "Temperature Converter" << endl;
    //Map inputs -> outputs
    cout << "Input Degrees Fahrenheit" << endl;
    cin >> degFer;
    degCel = (degFer-32) * (5/9);
    //Display the outputs
    cout << fixed << setprecision(1)<< degFer << " Degrees Fahrenheit = " << fixed << setprecision(1)<<degCel << "Degrees Centigrade";
    //Exit stage right or left!
    return 0;
}