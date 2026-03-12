/* 
 * File:   main.cpp
 * Author: Christopher Nakahara
 * Created on January 2, 2019, 12:36 PM
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
    float insAmt, homeCst;
    //Initialize or input i.e. set variable values
    cout << "Insurance Calculator" << endl;
    //Map inputs -> outputs
    cout << "How much is your house worth?" << endl;
    cin >> homeCst;
    insAmt = homeCst * .8;
    //Display the outputs

    //Exit stage right or left!
    return 0;
}