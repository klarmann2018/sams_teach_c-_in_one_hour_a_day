/*
 * =====================================================================================
 *
 *       Filename:  listing_0819.cpp
 *
 *    Description:  Using const Reference to Ensure That the Calling Function
 *    Cannot Modify a Value Sent by Reference
 *
 *        Version:  1.0
 *        Created:  2018年10月14日 23时02分17秒
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

void CalculateSquare(const int& Number, int& Result) // note "const"
{
    Result = Number * Number;
}

int main()
{
    cout << "Enter a number you wish to square: ";
    int Number = 0;
    cin >> Number;

    int Square = 0;
    CalculateSquare(Number, Square);
    cout << Number << "^2 = " << Square << endl;

    return 0;
}
