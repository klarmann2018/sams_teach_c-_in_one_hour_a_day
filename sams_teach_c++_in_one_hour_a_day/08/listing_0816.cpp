/*
 * =====================================================================================
 *
 *       Filename:  listing_0816.cpp
 *
 *    Description:  Using new(nothrow) That Returns Null When Allocation Fails
 *
 *        Version:  1.0
 *        Created:  2018年10月14日 13时51分27秒
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
    // Request lots of memory space, use nothrow version
    int* pAge = new(nothrow) int [0x1ffffffffffff];

    if (pAge) // check pAge != NULL
    {
        // Use the allocated memory
        delete[] pAge;
    }
    else
        cout << "Memory allocation failed. Ending program" << endl;

    return 0;
}

