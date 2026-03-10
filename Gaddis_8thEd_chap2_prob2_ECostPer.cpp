//Christopher Nakahara
//March 08 2026 11:41am
//East Coast Percentage
#include <iostream>
#include <iomanip>
using namespace std;
const float billion = 1e9f;
int main ()
{
    float eCostP = .58, eCost, cmpny = 8.6;
    eCost = cmpny * eCostP;

    cout << "The company made $" << cmpny << " Billion this year! And $" << eCost << " Billion came from our east coast division!" << endl;

    return 0;
}