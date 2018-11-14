/*
 * =====================================================================================
 *
 *       Filename:  listing_0510.cpp
 *
 *    Description:  Using Compound Assignment Operators to Add; Subtract;
 *    Divide; Perform Modulus; Shift; and Perform Bitwise OR, AND, and XOR
 *
 *        Version:  1.0
 *        Created:  2018年10月02日 15时16分37秒
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

int main()
{
    cout << "Enter a number: ";
    int Value = 0;
    cin >> Value;

    Value += 8;
    cout << "After += 8, Value = " << Value << endl;
    Value -= 2;
    cout << "After -= 2, Value = " << Value << endl;
    Value /= 4;
    cout << "After /= 4, Value = " << Value << endl;
    Value *= 4;
    cout << "After *= 4, Value = " << Value << endl;
    Value %= 1000;
    cout << "After %= 1000, Value = " << Value << endl;

    // Note: henceforth assignment happens within cout
    cout << "After <<= 1, Value = " << (Value <<= 1) << endl;
    cout << "After >>= 2, Value = " << (Value >>= 2) << endl;

    cout << "After |= 0x55, Value = " << (Value |= 0x55) << endl;
    cout << "After ^= 0x55, Value = " << (Value ^= 0x55) << endl;
    cout << "After &= 0x0F, Value = " << (Value &= 0x0F) << endl;

    return 0;
}

