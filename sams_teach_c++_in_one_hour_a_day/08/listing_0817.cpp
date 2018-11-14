/*
 * =====================================================================================
 *
 *       Filename:  listing_0817.cpp
 *
 *    Description:  Demonstrating That References Are Aliases for the Assigned
 *    Value
 *
 *        Version:  1.0
 *        Created:  2018年10月14日 14时01分15秒
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
    int Original = 30;
    cout << "Original = " << Original << endl;
    cout << "Original is at address: " << hex << &Original << endl;

    int& Ref = Original;
    cout << "Ref is at address: " << hex << &Ref << endl;

    int& Ref2 = Ref;
    cout << "Ref2 is at address: " << hex << &Ref2 << endl;
    cout << "Ref2 gets Value, Ref2 = " << dec << Ref2 << endl;
    return 0;
}

