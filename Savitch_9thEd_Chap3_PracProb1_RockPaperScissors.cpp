/* 
 * File:   Savitch_9thEd_Chap3_PracProb1_RockPaperScissors.cpp
 * Author: Chris Nakahara
 * Created March 25, 2026, 4:00 PM
 * Purpose:  Rock Paper Scissors       
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
    char player1,player2;
    //Initialize or input i.e. set variable values
    cout << "Rock Paper Scissors Game" << endl << "Input Player 1 and Player 2 Choices" << endl;
    //Map inputs -> outputs
    cin >> player1 >> player2;
    //Display the outputs
     if (tolower(player1) != 'r' && tolower(player1) != 'p' && tolower(player1) != 's' && 
     tolower(player2) != 'r' && tolower(player2) != 'p' && tolower(player2) != 's') // checking for valid inputs
     {
        cout << "Please enter a valid input" << endl;
     }
     else if (player1 == player2) // checking for ties 
     {
        cout << "Tie";
     }
     else if (tolower(player1) == 'r' && tolower(player2) == 'p') // checking who wins
     {
        cout << "Paper covers rock.";
     }
     else if (tolower(player1) == 'p' && tolower(player2) == 'r')
     {
        cout << "Paper covers rock.";
     }
     else if (tolower(player1) == 'r' && tolower(player2) == 's')
     {
        cout << "Rock breaks scissors.";
     }
     else if (tolower(player1) == 's' && tolower(player2) == 'r')
     {
        cout << "Rock breaks scissors.";
     }
     else if (tolower(player1) == 's' && tolower(player2) == 'p')
     {
        cout << "Scissors cuts paper.";
     }
     else 
     {
        cout << "Scissors cuts paper.";
     }
    //Exit stage right or left!
    return 0;
}