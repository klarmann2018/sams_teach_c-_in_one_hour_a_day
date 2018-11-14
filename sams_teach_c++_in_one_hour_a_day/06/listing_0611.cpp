/*
 * =====================================================================================
 *
 *       Filename:  listing_0611.cpp
 *
 *    Description:  Using a for Loop, Omitting Loop Expression, to Repeat
 *    Caculations on User Request
 *
 *        Version:  1.0
 *        Created:  2018年10月07日 17时35分11秒
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
    // without loop expression (third expression missing)
    for(char UserSelection = 'm'; (UserSelection != 'x'); )
    {
        cout << "Enter the two integers: "  << endl;
        int Num1 = 0, Num2 = 0;
        cin >> Num1;
        cin >> Num2;

        cout << Num1 << " x " << Num2 << " = " << Num1 * Num2 << endl;
        cout << Num1 << " + " << Num2 << " = " << Num1 + Num2 << endl;
        
        cout << "Press x to exit or any other key to recaculate" << endl;
        cin >> UserSelection;
    }

    cout << "Goodbye!" << endl;

    return 0;
}

