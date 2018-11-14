/*
 * =====================================================================================
 *
 *       Filename:  listing_0509.cpp
 *
 *    Description:  Using Bitwise Right Shift Operator(>>) to Quarter and Half
 *    and Left Shift(<<) to Double and Quadruple an Input Integer
 *
 *        Version:  1.0
 *        Created:  2018年10月02日 14时24分36秒
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
    cout << "Enter a number: ";
    int Input = 0;
    cin >> Input;

    int Half = Input >> 1;
    int Quarter = Input >> 2;
    int Double = Input << 1;
    int Quadruple = Input << 2;

    cout << "Quarter: " << Quarter << endl;
    cout << "Half: " << Half << endl;
    cout << "Double: " << Double << endl;
    cout << "Quadruple: " << Quadruple << endl;

    return 0;
}

