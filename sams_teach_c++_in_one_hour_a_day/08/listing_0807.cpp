/*
 * =====================================================================================
 *
 *       Filename:  listing_0807.cpp
 *
 *    Description:  Accessing Memory Allocated Using new via Operator (*) and
 *    Releasing It Using delete
 *
 *        Version:  1.0
 *        Created:  2018年10月13日 18时47分14秒
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
    // Request for memory space for an int
    int* pAge = new int;

    // Use the allocated memory to store a number
    cout << "Enter your dog's age: ";
    cin >> *pAge;

    // Use indirection operator * to access value
    cout << "Age " << *pAge << " is stored at " << hex << pAge << endl;

    delete pAge; // release memory

    return 0;
}

