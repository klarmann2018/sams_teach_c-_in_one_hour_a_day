/*
 * =====================================================================================
 *
 *       Filename:  listing_0503.cpp
 *
 *    Description:  Demonstrating the III-Effects of Signed and Unsigned Integer
 *                  Overflow Errors
 *
 *        Version:  1.0
 *        Created:  2018年10月01日 15时57分12秒
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
    unsigned short UShortValue=65535;
    cout << "Incrementing unsigned short " << UShortValue << " gives: ";
    cout << ++UShortValue << endl;

    short SignedShort= 32767;
    cout << "Incrementing signed short: " << SignedShort << " gives: ";
    cout << ++SignedShort << endl;

    return 0;
}
