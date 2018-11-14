/*
 * =====================================================================================
 *
 *       Filename:  listing_0811.cpp
 *
 *    Description:  Demonstrate That the Array Variable Is a Pointer to the
 *    First Element
 *
 *        Version:  1.0
 *        Created:  2018年10月13日 22时12分32秒
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
    // Static array of 5 integers
    int MyNumbers[5];

    // array assigned to pointer to int
    int* pNumbers = MyNumbers;
    
    // Display address contained in pointer
    cout << "pNumbers = " << hex << pNumbers << endl;

    // Address of first element of array
    cout << "&MyNumbers[0] = " << hex << &MyNumbers[0] << endl;

    return 0;
}


