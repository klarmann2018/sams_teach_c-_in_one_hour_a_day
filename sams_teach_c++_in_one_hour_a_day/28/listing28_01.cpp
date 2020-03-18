/*
 * =====================================================================================
 *
 *       Filename:  listing28_01.cpp
 *
 *    Description:  Using try and catch in Ensuring Exception Safety in Memory
 *    Allocations
 *
 *        Version:  1.0
 *        Created:  03/17/2020 08:13:09 PM
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
    cout << "Enter number of integers you wish to reserve: ";
    try{
        int Input = 0;
        cin >> Input;

        // Request memory space and then return it
        int* pReservedInts = new int[Input];
        delete[] pReservedInts;
    }
    catch(...)
    {
        cout << "Exception encountered. Got to end, sorry!" << endl;
    }
    return 0;
}

