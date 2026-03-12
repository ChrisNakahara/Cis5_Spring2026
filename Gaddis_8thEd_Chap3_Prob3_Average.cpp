/* 
 * File:   main.cpp
 * Author: Christopher Nakahara
 * Created on March 12, 2026, 11:24 AM
 * Purpose:  Average
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
    int test1, test2, test3,test4, test5, tstTot;
    float avrage;
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    cout << "Please enter the 5 test scores for the class." << endl;
    cin >> test1 >> test2 >> test3 >> test4 >> test5;

    tstTot = test1+test2+test3+test4+test5;
    avrage = tstTot /5;
    //Display the outputs
    cout << " The average test grade for the class is " << avrage << endl;

    //Exit stage right or left!
    return 0;
}