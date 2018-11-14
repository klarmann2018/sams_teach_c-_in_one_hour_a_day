/*
 * =====================================================================================
 *
 *       Filename:  listing_0607.cpp
 *
 *    Description:  Asking the User If He Wants to Repeat Caculations Using goto
 *
 *        Version:  1.0
 *        Created:  2018年10月07日 11时26分58秒
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
JumpToPoint:
    int Num1 = 0, Num2 = 0;

    cout << "Enter two integers: " << endl;
    cin >> Num1;
    cin >> Num2;

    cout << Num1 << " X " << Num2 << " = " << Num1 * Num2 << endl;
    cout << Num1 << " + " << Num2 << " = " << Num1 + Num2 << endl;

    cout << "Do you wish to perform another operation (y/n)?" << endl;
    char Repeat = 'y';
    cin >> Repeat;

    if (Repeat == 'y')
        goto JumpToPoint;

    cout << "Goodbye!" << endl;

    return 0;
}

