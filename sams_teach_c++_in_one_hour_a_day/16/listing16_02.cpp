/*
 * =====================================================================================
 *
 *       Filename:  listing16_02.cpp
 *
 *    Description:  Two Ways of Accessing Character Elements of an STL
 *    string::Operator[] and Iterators
 *
 *        Version:  1.0
 *        Created:  02/07/2020 08:10:42 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  bo lee
 *   Organization:  
 *
 * =====================================================================================
 */
#include<string>
#include<iostream>

int main()
{
    using namespace std;

    // The sample string
    string strSTLString("Hello String");

    // Access the contents of the string using array syntax
    cout << "Displaying the elements in the string using array-syntax: " << endl;
    for( size_t nCharCounter = 0; nCharCounter < strSTLString.length(); ++nCharCounter)
    {
        cout << "Character [" << nCharCounter << "] is: ";
        cout << strSTLString[nCharCounter] << endl;
    }
    cout << endl;

    // Access the contents of a string using iterators
    cout << "Displaying the contents of the string using iterators: " << endl;
    int charOffset = 0;
    string::const_iterator iCharacterLocator;
    for(iCharacterLocator = strSTLString.begin(); iCharacterLocator != strSTLString.end(); ++ iCharacterLocator)
    {
        cout << "Character [" << charOffset ++ << "] is: ";
        cout << *iCharacterLocator << endl;
    }
    cout << endl;

    // Access the contents of a string as a C-style string
    cout << "The char* representation of the string is: ";
    cout << strSTLString.c_str() << endl;
    return 0;
}
