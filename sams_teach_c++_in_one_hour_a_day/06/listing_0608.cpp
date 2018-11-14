/*
 * =====================================================================================
 *
 *       Filename:  listing_0608.cpp
 *
 *    Description:  Using a while Loop to Help the User Rerun Calculations
 *
 *        Version:  1.0
 *        Created:  2018年10月07日 12时23分49秒
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
    char UserSelection = 'm'; // initial value

    while(UserSelection != 'x')
    {
        cout << "Enter the two integers: " << endl;
        int Num1 = 0, Num2 = 0;
        cin >> Num1;
        cin >> Num2;

        cout << Num1 << " x " << Num2 << " = " << Num1 * Num2 << endl;
        cout << Num1 << " + " << Num2 << " = " << Num1 + Num2 << endl;

        cout << "Press x to exit(x) or any other key to recalculate" << endl;
        cin >> UserSelection;
    }

    cout << "Goodbye!" << endl;

    return 0;
}

