/*
 * =====================================================================================
 *
 *       Filename:  listing27_06.cpp
 *
 *    Description:  Inserting Text into a std::string Using cin
 *
 *        Version:  1.0
 *        Created:  03/17/2020 06:32:06 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  bo lee
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "Enter your name: ";
    string Name;
    cin >> Name;
    cout << "Hi " << Name << endl;

    return 0;
}

