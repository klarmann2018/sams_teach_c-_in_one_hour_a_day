/*
 * =====================================================================================
 *
 *       Filename:  listing2_5.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  09/08/2016 01:53:28 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <iostream>

using namespace std;

// Function declaration and definition
int DemoConsoleOutput()
{
    cout << "This is a simple literal"<< endl;
    cout << "Writing number five: " << 5 <<endl;
    cout << "Performing division 10/5 = " << 10 / 5 << endl;
    cout << "Pi when approximated is 22 / 7 = " << 22 /7 << endl;
    cout << "Pi more accurately is 22 / 7 = " << 22.0 / 7 << endl;

    return 0;
}

int main()
{
    // function call with return used to exit
   return DemoConsoleOutput();
}
