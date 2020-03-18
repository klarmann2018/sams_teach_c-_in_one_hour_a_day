/*
 * =====================================================================================
 *
 *       Filename:  listing28_02.cpp
 *
 *    Description:  Catching Exceptions of Type std::bad_alloc
 *
 *        Version:  1.0
 *        Created:  03/17/2020 08:18:42 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  bo lee
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>
#include <exception> // include this to catch exception bad_alloc
using namespace std;

int main()
{
    cout << "Enter number of integers you wish to reserve: ";
    try
    {
        int Input = 0;
        cin >> Input;

        // Request memory space and then return it
        int* pReservedInts = new int[Input];
        delete[] pReservedInts;
    }
    catch(std::bad_alloc & exp)
    {
        cout << "Exception encountered: " << exp.what() << endl;
        cout << "Got to end, sorry!" << endl;
    }
    catch(...)
    {
        cout << "Exception encountered. Got to end, sorry!" << endl;
    }

    return 0;
}


