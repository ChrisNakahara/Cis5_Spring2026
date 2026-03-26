/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 2, 2019, 12:36 PM
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
    short days;
    int pennies = 1 , sum = 0;
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    do 
    {
        cin >> days;
    }
    while (days < 0);
    for (int i = 0; i < days; i++)
    {
        sum += pennies;
        pennies *= 2;
    }
    int dollars = sum / 100;//getting a dollar amount 
    int change = sum % 100;// getting cents
    cout << "Pay = $" << dollars << ".";
    if (change < 10 )
    {
        cout << "0";
    }
    cout << change;
    //Display the outputs

    //Exit stage right or left!
    return 0;
}