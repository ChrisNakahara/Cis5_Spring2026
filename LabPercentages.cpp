//LabPercentages
//Christopher Nakahara
//Feb. 24 2026 11:50am
#include <iostream>
using namespace std;
const float trillion = 1e12f; // setiing up the constent variables
const float billion = 1e9f;

 int main(){
    float milBudg = 8.42e11f, fedBudg = 6.5e12f, milPrnt, percent = 100; // Declare the variables

    milPrnt = milBudg/ fedBudg; //divid the military budget by fed budget to get the percentage.

    cout <<"The Federal Budget is $" << fedBudg / trillion << " trillion and the Military Budget is $"<< milBudg / billion << " billion"<< endl;
    cout<<"The Military Budget is "<< milPrnt * percent << "% " << "of the Federal Budget."<< endl;
 return 0; }
