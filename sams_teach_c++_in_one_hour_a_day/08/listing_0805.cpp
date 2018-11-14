/*
 * =====================================================================================
 *
 *       Filename:  listing_0805.cpp
 *
 *    Description:  Manipulating Data Using a Pointer and the Dereference
 *    Operator(*)
 *
 *        Version:  1.0
 *        Created:  2018年10月13日 15时49分18秒
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
    int DogsAge = 30;
    cout << "Initialized DogsAge = " << DogsAge << endl;

    int* pAge = &DogsAge;
    cout << "pAge points to DogsAge" << endl;

    cout << "Enter an age for your dog: ";
    // store input at the memory pointed to by pAge
    cin >> *pAge;

    // Displaying the address where age is stored
    cout << "Input stored using pAge at: " << hex << pAge << endl;

    cout << "Integer DogsAge = " << dec << DogsAge << endl;

    return 0;
}

