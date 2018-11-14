/*
 * =====================================================================================
 *
 *       Filename:  listing_0603.cpp
 *
 *    Description:  Using Nested if Statements in Multiplying or Dividing a
 *    Number
 *
 *        Version:  1.0
 *        Created:  2018年10月03日 19时55分00秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  bo li
 *   Organization:  
 *
 * =====================================================================================
 */
#include<iostream>
using namespace std;

int main()
{
    cout << "Enter two numbers: " << endl;
    float Num1 = 0, Num2 = 0;
    cin >> Num1;
    cin >> Num2;

    cout << "Enter 'd' to divide, anything else to multiply: ";
    char UserSelection = '\0';
    cin >> UserSelection;

    if( UserSelection == 'd')
    {
        cout << "You want division!" << endl;
        if (Num2 != 0)
        {
            cout << "No div-by-zero, proceeding to calculate" << endl;
            cout << Num1 << " / " << Num2 << " = " << Num1 / Num2 << endl;
        }
        else
            cout << "Division by zero is not allowed" << endl;
    }
    else
    {
        cout << "You want multiplication!" << endl;
        cout << Num1 << " X " << Num2 << " = "<< Num1 * Num2 << endl;
    }
    return 0;
}

