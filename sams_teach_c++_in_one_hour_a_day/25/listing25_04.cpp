/*
 * =====================================================================================
 *
 *       Filename:  listing25_04.cpp
 *
 *    Description:  Using the vector<bool>
 *
 *        Version:  1.0
 *        Created:  03/14/2020 10:39:01 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  bo lee
 *   Organization:  
 *
 * =====================================================================================
 */
#include <vector>
#include <iostream>
using namespace std;

int main()
{
    vector<bool> vecBoolFlags(3);   // instantiated to hold 3 bool flags
    vecBoolFlags[0] = true;
    vecBoolFlags[1] = true;
    vecBoolFlags[2] = false;

    vecBoolFlags.push_back(true);   // insert a fourth bool at the end

    cout << "The contents of the vector are: " << endl;
    for(size_t nIndex = 0; nIndex < vecBoolFlags.size(); ++ nIndex)
        cout << vecBoolFlags[nIndex] << ' ';

    cout << endl;
    vecBoolFlags.flip();

    cout << "The contents of the vector are: " << endl;
    for(size_t nIndex = 0; nIndex < vecBoolFlags.size(); ++ nIndex)
        cout << vecBoolFlags[nIndex] << ' ';

    cout << endl;

    return 0;
}

