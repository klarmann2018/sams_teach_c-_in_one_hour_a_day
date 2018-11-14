/*
 * =====================================================================================
 *
 *       Filename:  listing_0602.cpp
 *
 *    Description:  Check for Capacity Before Copying a String into a char Array
 *
 *        Version:  1.0
 *        Created:  2018年10月03日 14时04分01秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  bo lee
 *   Organization:  
 *
 * =====================================================================================
 */
#include<iostream>
#include<string>
#include<cstring>
using namespace std;

int main()
{
    char Buffer[20] = {'\0'};

    cout << "Enter a line of text: " << endl;
    string LineEntered;
    getline(cin, LineEntered);

    if (LineEntered.length() < 20)
    {
        strcpy(Buffer, LineEntered.c_str());
        cout << "Buffer contains: " << Buffer << endl;
    }

    return 0;
}

