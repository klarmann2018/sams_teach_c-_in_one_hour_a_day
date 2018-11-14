/*
 * =====================================================================================
 *
 *       Filename:  listing_0802.cpp
 *
 *    Description:  Demonstrating the Declaration and Initialization of a
 *    Pointer
 *
 *        Version:  1.0
 *        Created:  2018年10月12日 09时06分15秒
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
    int *pInteger = &Age;   // pointer to an integer, initialized to &Age

    // Displaying the value of pointer
    cout << "Integer Age is at :" << hex << pInteger << endl;

    return 0;
}
