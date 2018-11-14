/*
 * =====================================================================================
 *
 *       Filename:  listing_0606.cpp
 *
 *    Description:  Using the Conditional Operator (?:) to Find the Max of Two
 *    Numbers
 *
 *        Version:  1.0
 *        Created:  2018年10月07日 10时29分57秒
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
    cout << "Enter two numbers" << endl;
    int Num1 = 0, Num2 = 0;
    cin >> Num1;
    cin >> Num2;

    int MAX = (Num1 > Num2)? Num1 : Num2;
    cout << "The greater of " << Num1 << " and " \
        << Num2 << " is: " << MAX << endl;

    return 0;
}

