/* 
 * File:   Gaddis_9thEd_Chap4_Prob12_BankCharges.cpp
 * Author: Chris Nakahara
 * Created March 23, 2026, 8:30 PM
 * Purpose:  Calculating monthly bank fees       
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
    float bal,nwBal,chkFee,monFee = 10,lowBal,numChk;
    //Initialize or input i.e. set variable values
    cout << "Monthly Bank Fees" << endl << "Input Current Bank Balance and Number of Checks" << endl;
    //Map inputs -> outputs
    cin >> bal >> numChk;
    //Display the outputs
    cout << "Balance     $   " << fixed << setprecision(2) << bal << endl;
    if (numChk < 1)
    {
        chkFee = 0;
    }
    else if (numChk < 20 )
    {
        chkFee = numChk * 0.1;
    }
    else if (numChk < 40)
    {
        chkFee = numChk * .08;
    }
    else if (numChk > 60)
    {
        chkFee = numChk * .06;
    }
    else
    {
        chkFee = numChk * .04;
    }
    cout << "Check Fee   $     " << chkFee << endl;
    nwBal = bal - chkFee;
    cout << "Monthly Fee $    " << monFee << endl;
    nwBal -= monFee;
    if(bal < 400)
    {
        lowBal = 15;
    }
    else 
    {
        lowBal = 0;
    }
    cout << "Low Balance $    " << lowBal << endl;
    nwBal -= lowBal;
    cout << "New Balance $    " << nwBal;
    //Exit stage right or left!
    return 0;
}