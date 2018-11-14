/*
 * =====================================================================================
 *
 *       Filename:  listing_0815.cpp
 *
 *    Description:  Handle Exceptions, Exit Gracefully When new Fails
 *
 *        Version:  1.0
 *        Created:  2018年10月14日 13时36分48秒
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
    try
    {
        // Request lots of memory space
        int* pAge = new int [536870911111111111];

        // Use the allocated memory
        
        delete[] pAge;
    }
    catch (bad_alloc)
    {
        cout << "Memory allocation failed. Ending program" << endl;
    }
    return 0;
}

