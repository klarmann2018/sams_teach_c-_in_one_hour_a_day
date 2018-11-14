/*
 * =====================================================================================
 *
 *       Filename:  listing_0511.cpp
 *
 *    Description:  Using sizeof to Determine the Number of Bytes Occupied by an
 *    Array of 100 Integers, and That by Each Element Therein
 *
 *        Version:  1.0
 *        Created:  2018年10月02日 17时17分40秒
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
    cout << "Use sizeof of determine memory occupied by arrays " << endl;
    int MyNumbers [100] = {0};

    cout << "Bytes occupied by an int: " << sizeof(int) << endl;
    cout << "Bytes occupied by array MyNumbers: " << sizeof(MyNumbers) << endl;
    cout << "Bytes occupied by each element: " << sizeof(MyNumbers[0]) << endl;
    return 0;
}

