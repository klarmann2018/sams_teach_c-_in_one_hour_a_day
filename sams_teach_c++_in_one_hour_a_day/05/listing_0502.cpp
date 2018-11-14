/*
 * =====================================================================================
 *
 *       Filename:  listing_0502.cpp
 *
 *    Description:  Demonstrate the Difference Between Postfix and Prefix
 *                  Operators
 *
 *        Version:  1.0
 *        Created:  2018年10月01日 14时55分43秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  bo li
 *   Organization:  
 *
 * =====================================================================================
 */
#include<iostream>
using namespace std;

int main()
{
    int MyInt=101;
    cout <<  "Start Value of Integer being operated: " <<  MyInt<< endl;

    int PostFixInc=MyInt++;
    cout <<  "Result of Postfix Increment = " << PostFixInc<<endl;
    cout << "After Postfix Increment, MyInt= " << MyInt<<endl;

    MyInt=101; //Reset
    int PreFixInc=++MyInt;
    cout << "Result of Prefix Increment = " << PreFixInc << endl;
    cout << "After Prefix Increment, MyInt= " << MyInt << endl;

    MyInt=101;
    int PostFixDec=MyInt--;
    cout << "Result of Postfix Decrement = " << PostFixDec << endl;
    cout << "After Postfix Decrement, MyInt= " << MyInt << endl;

    MyInt=101;
    int PreFixDec=--MyInt;
    cout << "Result of Prefix Decrement = " << PreFixDec << endl;
    cout << "After Prefix Decrement, MyInt= " << MyInt << endl;


    return 0;
}
