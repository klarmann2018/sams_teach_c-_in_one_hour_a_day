/*
 * =====================================================================================
 *
 *       Filename:  listing22_01.cpp
 *
 *    Description:  Displaying Elements in a Character via Algorithm for_each()
 *    That Is Invoke with a Lambda Expression Instead of a Function Object
 *
 *        Version:  1.0
 *        Created:  03/08/2020 06:28:16 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  bo lee
 *   Organization:  
 *
 * =====================================================================================
 */
#include <algorithm>
#include<iostream>
#include<vector>
#include<list>

using namespace std;

int main()
{
    vector<int> vecIntegers;

    for(int nCount = 0; nCount < 10; ++ nCount)
    {
        vecIntegers.push_back(nCount);
    }

    list<char> listChars;
    for(char nChar = 'a'; nChar < 'k'; ++nChar)
        listChars.push_back(nChar);

    cout << "Displaying vector of integers using a lambda: " << endl;

    // Display the array of integers
    for_each(vecIntegers.begin()    // Start of range
            , vecIntegers.end()     // End of range
            , [](int & element){cout << element << ' '; } );    // lambda

    cout << endl << endl;
    cout << "Displaying list of characters using a lambda: " << endl;

    // Display the list of characters
    for_each( listChars.begin()     // Start of range
            , listChars.end()       // End of range
            , [](char& element) {cout << element << ' '; }); // lambda
    
    cout << endl;

    return 0;
}

