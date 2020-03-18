/*
 * =====================================================================================
 *
 *       Filename:  listing27_07.cpp
 *
 *    Description:  Reading a Complete Line Input by User Using getline() and
 *    cin
 *
 *        Version:  1.0
 *        Created:  03/17/2020 06:36:33 PM
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
    getline(cin, Name);
    cout << "Hi " << Name << endl;

    return 0;
}

