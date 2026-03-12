/* 
 * File:   main.cpp
 * Author: Christopher Nakahara
 * Created on March 12, 2026, 11:24 AM
 * Purpose:  Average
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
    int num1,num2,num3,num4,num5,total;
    float avrage;
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    cout << "Input 5 numbers to average." << endl;
    cin >> num1>> num2>>num3>>num4>>num5;

    total = num1+num2+num3+num4+num5;
    avrage = static_cast<float> (total) /5;
    //Display the outputs
    cout << " The average = " << fixed << setprecision(1)<< avrage;

    //Exit stage right or left!
    return 0;
}