/*
 * =====================================================================================
 *
 *       Filename:  template.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/28/2019 09:03:59 AM
 *       Revision:  none
 *       Compiler:  g++ template.cpp -o template.out [-lm]
 *          Usage:  ./template.out
 *
 *         Author:  Chase May (), chasemay@mail.weber.edu
 *   Organization:  WSU
 *
 * =======================================  ==============================================
 */
#include <iostream>
#include <iomanip>
using namespace std;

// Constants & Globals
const double MI_PER_LY = 5.879e+12;
const double KM_PER_LY = 9.461e+12;
const double PC_PER_LY = 0.306601;

// Function Prototypes

// Main Function
int main(int argc, char* argv[])
{
    double lightyears;
    
    cout << "Lightyear Calculator" << endl;
    cout << endl;

    cout << "Enter lightyears: ";
    cin >> lightyears;

    double mi = lightyears * MI_PER_LY;
    double km = lightyears * KM_PER_LY;
    double pc = lightyears * PC_PER_LY;

    cout << fixed
        // << "SCIENTIFIC NOTATION" << endl
        << "Miles       " << setw(24) << mi << endl
        << "Kilometers  " << setw(24) << km << endl
        << "Parsecs     " << setw(24) << pc << endl;
    
    return 0;
}
// Function Definitions
