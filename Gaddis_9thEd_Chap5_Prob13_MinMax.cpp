/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
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
    int max, min, num;
    //Initialize or input i.e. set variable values
     num = 0;
     min = -98;
     max = -99;
    //Map inputs -> outputs
      do 
    {
        cin >> num;
        if (num != 99)
        {
            if (min == -99 || num < min )
            min = num;
            if (max == -99 || num > max )
            max = num;
        }
    }while (num != -99);
    //Display the outputs
    cout << "Smallest number in the series is " << min << endl;
    cout << "Largest  number in the series is " << max;
    //Exit stage right or left!
    return 0;
}