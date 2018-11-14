/*
 * =====================================================================================
 *
 *       Filename:  listing_0610.cpp
 *
 *    Description:  Using for Loops to Enter Elements in a Static Array and
 *    Displaying It
 *
 *        Version:  1.0
 *        Created:  2018年10月07日 16时45分40秒
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
    const int ARRAY_LENGTH = 5;
    int MyInts[ARRAY_LENGTH] = {0};

    cout << "Populate array of " << ARRAY_LENGTH << " integers" << endl;
    
    for (int ArrayIndex = 0; ArrayIndex < ARRAY_LENGTH; ++ArrayIndex)
    {
        cout << "Enter an integer for element " << ArrayIndex << ": ";
        cin >> MyInts[ArrayIndex];
    }

    cout << "Displaying contents of the array: " << endl;

    for (int ArrayIndex = 0; ArrayIndex < ARRAY_LENGTH; ++ArrayIndex)
    {
        cout << "Element "  << ArrayIndex << " = " << MyInts[ArrayIndex] << endl;
    }

    return 0;
}

