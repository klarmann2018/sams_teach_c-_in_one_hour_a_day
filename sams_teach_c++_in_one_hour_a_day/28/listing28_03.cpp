/*
 * =====================================================================================
 *
 *       Filename:  listing28_03.cpp
 *
 *    Description:  Throwing a Custom Exception at an Attempt to Divide by Zero
 *
 *        Version:  1.0
 *        Created:  03/17/2020 08:27:22 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  bo lee
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>
using namespace std;

double Divide(double Dividend, double Divisor)
{
    if(Divisor == 0)
        throw "Dividing by 0 is a crime";

    return (Dividend / Divisor);
}

int main()
{
    cout << "Enter dividend: ";
    double Dividend = 0;
    cin >> Dividend;
    cout << "Enter divisor: ";
    double Divisor = 0;
    cin >> Divisor;

    try
    {
        cout << "Result of division is: " << Divide(Dividend, Divisor);
    }
    catch(const char* exp)
    {
        cout << "Exception: " << exp << endl;
        cout << "Sorry, can't continue!" << endl;
    }
    
    return 0;
}

