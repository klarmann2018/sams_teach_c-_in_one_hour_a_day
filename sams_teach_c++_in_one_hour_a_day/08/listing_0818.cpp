/*
 * =====================================================================================
 *
 *       Filename:  listing_0818.cpp
 *
 *    Description:  Function That Calculates Square Returned in a Parameter by
 *    Reference
 *
 *        Version:  1.0
 *        Created:  2018年10月14日 22时43分32秒
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

void ReturnSquare(int& Number)
{
    Number *= Number;
}

int main()
{
    cout << "Enter a number you wish to square: ";
    int Number = 0;
    cin >> Number;

    ReturnSquare(Number);
    cout << "Square is: " << Number << endl;

    return 0;
}

