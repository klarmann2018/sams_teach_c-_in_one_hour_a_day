/*
 * =====================================================================================
 *
 *       Filename:  listing27_05.cpp
 *
 *    Description:  Inserting into a C-Style Buffer Without Exceeding Its Bounds
 *
 *        Version:  1.0
 *        Created:  03/17/2020 06:26:02 PM
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
    cout << "Enter a line: " << endl;
    char CStyleStr[10] = {0};
    cin.get(CStyleStr, 9);
    cout << "CStyleStr: " << CStyleStr << endl;

    return 0;
}

