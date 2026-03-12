/* 
 * File:   main.cpp
 * Author: Christopher Nakahara
 * Created on March 12, 12:07 PM
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
    int calPrCk = 75, cookie, totCal;
    //Initialize or input i.e. set variable values
    cout << "Calorie Counter" << endl;
    //Map inputs -> outputs
    cout << "How many cookies did you eat?" << endl;
    cin >> cookie;
    totCal = cookie * calPrCk;
    //Display the outputs
    cout << "You consumed " << totCal << " calories.";
    //Exit stage right or left!
    return 0;
}