/*
 * =====================================================================================
 *
 *       Filename:  listing21_01.cpp
 *
 *    Description:  Displaying the Contents of a Collection on the Screen Using
 *    a Unary Function
 *
 *        Version:  1.0
 *        Created:  03/05/2020 07:15:44 AM
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

// struct that behaves as a unary function
template<typename elementType>
struct DisplayElement
{
    void operator()(const elementType& element) const
    {
        cout << element << ' ';
    }
};

int main()
{
    vector<int> vecIntegers;
    for(int nCount = 0; nCount < 10; ++ nCount)
        vecIntegers.push_back(nCount);

    list<char> listChars;

    for(char nChar = 'a'; nChar < 'k'; ++ nChar)
        listChars.push_back(nChar);

    cout << "Displaying the vector of integers: " << endl;

    // Display the array of integers
    for_each(vecIntegers.cbegin() // Start of range
            , vecIntegers.cend() // End of range
            , DisplayElement<int>() ); // Unary function object

    cout << endl << endl;
    cout << "Displaying the list of characters: " << endl;

    // Display the list of characters
    for_each(listChars.cbegin()         // Start of range
            , listChars.cend()          // End of range
            , DisplayElement<char>() ); // Unary function object

    cout << endl << endl;
    return 0;
}

