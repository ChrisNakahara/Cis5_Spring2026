/* 
 * File:   Gaddis_9thEd_Chap4_Prob23_ISP.cpp
 * Author: Chris Nakahara
 * Created March 23, 2026, 8:30 PM
 * Purpose:  Calculating monthly bank fees       
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
    float planA = 9.95, planB = 14.95 ,planC = 19.95,totBill, hours; // the three pans you can choice for your internet bill 
    char plan;
    //Initialize or input i.e. set variable values
    cout << "ISP Bill" << endl << "Input Package and Hours" << endl;
    //Map inputs -> outputs
    cin >> plan >> hours;
    if (plan != 'a' && plan != 'A' && plan != 'b' && plan != 'B' && plan != 'c' && plan != 'C') // checking if the user inputed a correct plan
    {
        cout << "Please enter a correct plan";
    }
    else if  (hours < 0 || hours > 744)// checking if the user entered in a possiable number of hours
    {
        cout << "Please enter a possiable number of hours.";
    }
    else if (plan == 'a' || plan == 'A')
    {
        if (hours < 10) // checking to see if user went over allowed hours 
        {
            totBill = planA;
        }
        else 
        {
            totBill = planA + (hours - 10) * 2;
        }
    }
     else if (plan == 'b' || plan == 'B')
    {
        if (hours < 20) // checking to see if user went over allowed hours 
        {
            totBill = planB;
        }
        else 
        {
            totBill = planB + (hours - 20) * 1;
        }
    }
     else 
     {
        totBill = planC;
     }
  
    //Display the outputs
    cout << "Bill = $ " << totBill;
    //Exit stage right or left!
    return 0;
}