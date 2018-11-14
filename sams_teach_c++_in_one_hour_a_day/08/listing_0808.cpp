/*
 * =====================================================================================
 *
 *       Filename:  listing_0808.cpp
 *
 *    Description:  Allocating Using new[...] and Releasing It Using delete[]
 *
 *        Version:  1.0
 *        Created:  2018年10月13日 19时41分54秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  bo lee
 *   Organization:  
 *
 * =====================================================================================
 */
#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    cout << "Enter your name: ";
    string Name;
    cin >> Name;

    // Add 1 to reverse space for a terminating null
    int CharsToAllocate = Name.length() + 1;
    cout << "length of the string: " << CharsToAllocate << endl;
    
    // request for memory to hold copy of input
    char* CopyOfName = new char[CharsToAllocate];

    // strcpy copies from a null-terminated string
    strcpy(CopyOfName, Name.c_str());

    // display the copied string
    cout << "Dynamically allocated buffer contains: " << CopyOfName << endl;

    // Done using buffer? Delete
    delete[] CopyOfName;

    return 0;
}

