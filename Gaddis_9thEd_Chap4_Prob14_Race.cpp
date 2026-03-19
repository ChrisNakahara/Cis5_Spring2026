/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 2, 2019, 12:36 PM
 * Purpose:  Creation of Template to be used for all
 *           future projects
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
#include <string>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    string name1,name2,name3;
    float time1,time2,time3;
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    cout << "Race Ranking Program" << endl << "Input 3 Runners" << endl << "Their names, then their times" << endl;
    cin >> name1 >> time1;
    cin >> name2 >> time2;
    cin >> name3 >> time3;
    //Display the outputs
    if (time1 < time2) // is runner 1 faster than runner 2
    {//yes
        if (time1 < time3) // is runner 1 also faster than runner 3
        {
            if (time2 < time3) // whos second place runner 2 or runner 3
            {//yes
                cout << name1 << "\t" << setw(3) << time1 << endl << name2 << "\t" << setw(3) << time2 << endl 
                << name3 << "\t" << setw(3) << time3;
            }
            else 
            {//no
                cout << name1 << "\t" << setw(3) << time1 << endl << name3 << "\t" << setw(3) << time3 << endl 
                << name2 << "\t" << setw(3) << time2;
            }
        }
        else
        {//no
            cout << name3 << "\t" << setw(3) << time3 << endl << name1 << "\t" << setw(3) << time1 << endl 
            << name2 << "\t" << setw(3) << time2;
        }
    }
    else
    {// runner 2 beat runner 1
        if (time2 < time3)
        {
            if (time1 < time3)
            {
                cout << name2 << "\t" << setw(3) << time2 << endl << name1 << "\t" << setw(3) << time1 << endl 
                << name3 << "\t" << setw(3) << time3;
            }
            else 
            {
                cout << name2 << "\t" << setw(3) << time2 << endl << name3 << "\t" << setw(3) << time3 << endl 
                << name1 << "\t" << setw(3) << time1;
            }
        }
        else 
        {
            cout << name3 << "\t" << setw(3) << time3 << endl << name2 << "\t" << setw(3) << time2 << endl 
            << name1 << "\t" << setw(3) << time1;
        }
    }
    //Exit stage right or left!
    return 0;
}