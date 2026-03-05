//Christopher Nakahara
//March 03 2026 11:50am
//Sales Tax
#include <iostream>
using namespace std;
int main ()
{
    int bill = 95;
    float sTax = 1.04, cTax = 1.02, total;
    total = bill * sTax * cTax;
    cout << "The total on your $" << bill << " bill after tax is " << total << endl;
  
    return 0;
}