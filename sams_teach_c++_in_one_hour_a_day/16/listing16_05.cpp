/*
 * =====================================================================================
 *
 *       Filename:  listing16_05.cpp
 *
 *    Description:  Using string::erase to Truncate a String Starting an Offset
 *    Position or Given an Iterator
 *
 *        Version:  1.0
 *        Created:  02/09/2020 09:35:23 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  bo lee
 *   Organization:  
 *
 * =====================================================================================
 */
#include<string>
#include<algorithm>
#include<iostream>

int main()
{
    using namespace std;

    string strSample("Hello String! Wake up to a beautiful day!");
    cout << "The original sample string is: " << endl;
    cout << strSample << endl << endl;

    // Delete characters from the string given position and count
    cout << "Truncating the second sentence: " << endl;
    strSample.erase(13,28);
    cout << strSample << endl << endl;

    // Find a character 'S' in the string using STL find algorithm
    string::iterator iCharS = find (strSample.begin(),strSample.end(),'S');

    // If character found, 'erase' to deletes a character
    cout << "Erasing character 'S' from the sample string:" << endl;
    if(iCharS != strSample.end())
        strSample.erase(iCharS);
    
    cout << strSample << endl << endl;

    // Erase a range of characters using an overloaded version of erase()
    cout << "Erasing a range between begin() and end(): " << endl;
    strSample.erase(strSample.begin(),strSample.end());

    // Verify the length after the erase() operation above
    if(strSample.length() == 0)
        cout << "The string is empty" << endl;

    return 0;
}
