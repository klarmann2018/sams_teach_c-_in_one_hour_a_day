/*
 * =====================================================================================
 *
 *       Filename:  listing_0609.cpp
 *
 *    Description:  Using do...while to Repeat Execution of a Block of Code
 *
 *        Version:  1.0
 *        Created:  2018年10月07日 16时14分17秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  bo lee
 *   Organization:  
 *
 * =====================================================================================
 */
#include<iostream>
using namespace std;

int main()
{
    char UserSelection = 'x';   // initial value
    do
    {
        cout << "Enter the two integers: "  << endl;
        int Num1 = 0, Num2 = 0;
        cin >> Num1;
        cin >> Num2;

        cout << Num1 << " x " << Num2 << " = " << Num1 * Num2 << endl;
        cout << Num1 << " + " << Num2 << " = " << Num1 + Num2 << endl;

        cout << "Press x to exit(x) or any other key to recalculate" << endl;
        cin >> UserSelection;
    } while (UserSelection != 'x');

    cout << "Goodbye!" << endl;
    return 0;
}

