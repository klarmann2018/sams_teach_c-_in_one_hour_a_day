/*
 * =====================================================================================
 *
 *       Filename:  listing_0814.cpp
 *
 *    Description:  Safer Pointer Programming, a Correction of Listing 8.13
 *
 *        Version:  1.0
 *        Created:  2018年10月14日 13时14分03秒
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
    cout << "Is it sunny (y/n)? ";
    char UserInput = 'y';
    cin >> UserInput;

    if (UserInput == 'y')
    {
        // initialized pointer (good)
        int* pTemperature = new int;
        *pTemperature = 30;

        cout << "Temperature is: " << *pTemperature << endl;

        // done using pointer? delete
        delete pTemperature;
    }

    return 0;
}

