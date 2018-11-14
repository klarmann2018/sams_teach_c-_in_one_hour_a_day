/*
 * 
 * =====================================================================================
 *
 *       Filename:  listing07_10.cpp
 *
 *    Description:  Using an Inline Function That Doubles an Integer
 *
 *        Version:  1.0
 *        Created:  2018年10月09日 22时18分48秒
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

// define an inline function that doubles
inline long DoubleNum (int InputNum)
{
    return InputNum * 2;
}

int main()
{
    cout << "Enter an integer: ";
    int InputNum = 0;
    cin >> InputNum;

    // Call inline function
   cout << "Double is: " << DoubleNum(InputNum) << endl;

    return 0;
}
