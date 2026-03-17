/* 
 * File:   main.cpp
 * Author: Christopher Nakahara
 * Created on March 16, 6:02pm
 * Purpose:  Creation of Template to be used for all
 *           future projects
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cmath>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
float PI = 3.141592653589793;
//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float ang, rad;
    //Initialize or input i.e. set variable values
    cout << "Calculate trig functions" << endl;
    //Map inputs -> outputs
    cout << "Input the angle in degrees." << endl;
    cin >> ang;
    rad  = ang * PI / 180.0;
    //Display the outputs 
    cout << "Sin(" << ang << ") = " << fixed << setprecision(4)<< sin(ang) << endl;
    cout << "Cos(" << fixed << setprecision(0) <<  ang <<  ") = " << fixed << setprecision(4) << cos(ang) << endl;
    cout << "Tan(" << fixed << setprecision(0) << ang <<  ") = " << fixed << setprecision(4) << tan(ang);
    //Exit stage right or left!
    return 0;
}