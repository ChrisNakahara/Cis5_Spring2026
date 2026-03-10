//Christopher Nakahara
//March 05 2026 12:20pm
//Miles Per Gallon
#include <iostream>
#include <iomanip>
using namespace std;
int main () 
{
    float item1 = 15.95, item2 = 24.95, item3 = 6.95, item4 = 12.95, item5 = 3.95, 
    subTot, tax, total; // declaring variables 
    subTot = item1 + item2 + item3 + item4 + item5; // adding all items together to get the subtotal
    tax = subTot * .07; // calculating tax 
    total = tax + subTot; // calculating total 

    cout << "$" << item1 << endl << "$" << item2 << endl << "$" << item3 << endl << 
    "$" << item4 << endl << "$" << item5 << endl <<"Subtotal: $" << subTot << endl <<
     "Tax: $" << fixed << setprecision(2)<< tax << endl << "Total :$" << total ;
    
    return 0;
}