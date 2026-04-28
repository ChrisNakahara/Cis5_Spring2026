/* 
 * File:   MidTerm_ISP_charges.cpp
  * Author: Christopher Nakahara
 * Created 04/28/26 11:40am
 * Purpose: ISP Charges 
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    char package;
    unsigned short hours;
    float pckageA, pckageB, pckageC;
    
    //Input or initialize values Here
    cout<<"ISP charges for service delivered."<<endl;
    cout<<"Input package A,B,C then hours used for the month"<<endl;
    cin>>package>>hours;
    
    //Basic Charges
    if (hours <= 10)
    {
        pckageA = 16.99;
        pckageB = 26.99;
        pckageC = 36.99;
    }
    else if ( hours <= 20)
    {
        pckageA = 16.99 + ((hours - 10) * 0.95);
        pckageB = 26.99;
        pckageC = 36.99;
    }
    else 
    {
         pckageA = 16.99 + ((10) * 0.95) + ((hours - 20) * .85);
        if (hours <= 30)
        {
            pckageB = 26.99 + (hours - 20) * .74;
        }
        else 
        {
            pckageB = 26.99 + ((10) * .74) + ((hours - 30) * .64);
        }
        pckageC = 36.99;
    }
    
    //Output the Charge
    if (package == 'a' || package == 'A')
    {
        cout << "$" << pckageA;
    }
    else if (package == 'b' || package == 'B')
    {
        cout << "$" << pckageB;
    }
    else 
    {
        cout << "$" << pckageC;
    }

    //Output the cheapest package and the savings
    if ( pckageA < pckageB && pckageA < pckageC)
    {
        cout << " A ";
    }
    else if ( pckageB < pckageA && pckageB < pckageC)
    {
        cout << " B ";
    }
    else 
    {
        cout << " C ";
    }


    

     if (package == 'a' || package == 'A')
    {
        cout << "$" << pckageA;
    }
    else if (package == 'b' || package == 'B')
    {
        cout << "$" << pckageB;
    }
    else 
    {
        cout << "$" << pckageC;
    }

        
    //Exit
    return 0;
}