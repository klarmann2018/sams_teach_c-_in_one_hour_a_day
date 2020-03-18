/*
 * =====================================================================================
 *
 *       Filename:  listing27_03.cpp
 *
 *    Description:  Set the Width of a Field via setw() and the Fill Characters
 *    Using setfill() Manipulators
 *
 *        Version:  1.0
 *        Created:  03/17/2020 07:06:53 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  bo lee
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    cout << "Hey - default!" << endl;

    cout << setw(35);   // set field width to 25 columns
    cout << "Hey - right aligned!" << endl;

    cout << setw(35) << setfill('*');
    cout << "Hey - right aligned!" << endl;

    cout << "Hey - back to default!" << endl;

    return 0;
}

