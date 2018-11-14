/*
 * =====================================================================================
 *
 *       Filename:  ex03.cpp
 *
 *    Description:  bitwise two boolean
 *
 *        Version:  1.0
 *        Created:  2018年10月02日 19时08分37秒
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
    cout << "input two boolean values(0/1):"<< endl;
    bool ValueFirst = false;
    cin >> ValueFirst;
    bool ValueSec = false;
    cin >> ValueSec;

    cout << "Result two Boolean values Bitwise operate:" << endl;
    cout << "ValueFirst | ValueSec = " << (ValueFirst | ValueSec) << endl;
    cout << "ValueFirst & ValueSec = " << (ValueFirst & ValueSec) << endl;
    cout << "ValueFirst ^ ValueSec = " << (ValueFirst ^ ValueSec) << endl;
    
    return 0;
}

