/* 
 * File:   MidTerm_Calculate_your_Gross_Paycheck.cpp
 * Author: Christopher Nakahara
 * Created 04/28/26
 * Purpose:  Gross pay 
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
    float payRate, dblPay, OverTm, regPay, paycheck;
    unsigned short hrsWrkd;
    
    //Input or initialize values Here
    cout<<"Paycheck Calculation."<<endl;
    cout<<"Input payRate in $'s/hour and hours worked"<<endl;
    cin>>payRate>>hrsWrkd; // user inputs payrate and hours worked
    
    //Calculate Paycheck
    if (hrsWrkd > 40) // if hours worked are more than 40 we have to calc both over time and double time 
    {
        dblPay = payRate * 20;
        OverTm = payRate *1.5 * 20;
        regPay = payRate * 2 * (hrsWrkd - 40);
        paycheck = dblPay + OverTm + regPay;
    }
    else if (hrsWrkd > 20 && hrsWrkd <= 40) // if hours worked are more than 20 but 40 or less then we have to calc for overtime but not double time 
    {
        OverTm = payRate * 20;
        regPay = payRate *1.5 * (hrsWrkd - 20);
        paycheck = OverTm + regPay;
    } 
    else // if hours work is 20 or less we calc just regular pay
    {
        regPay = payRate * hrsWrkd;
        paycheck = regPay;
    }
    
    //Output the check
    cout << "$" << fixed << setprecision (2) <<  paycheck << endl; // output total
    
    //Exit
    return 0;
}