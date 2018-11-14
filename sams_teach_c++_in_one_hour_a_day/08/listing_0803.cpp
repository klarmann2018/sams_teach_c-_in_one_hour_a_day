/*
 * =====================================================================================
 *
 *       Filename:  listing_0803.cpp
 *
 *    Description:  Pointer reassignment to another variable
 *
 *        Version:  1.0
 *        Created:  2018年10月12日 12时41分29秒
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
    int Age = 30;
    int* pInteger = &Age;
    cout << "pInteger points to Age now" << endl;

    // Displaying the value of pointer
    cout << "pInteger = " << hex << pInteger << endl;

    int DogsAge = 9;
    pInteger = &DogsAge;
    cout << "pInteger points to DogsAge now" << endl;

    cout << "pInteger = " << hex << pInteger <<endl;

    return 0;
}

