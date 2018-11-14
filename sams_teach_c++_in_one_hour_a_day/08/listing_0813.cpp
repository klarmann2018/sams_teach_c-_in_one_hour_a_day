/*
 * =====================================================================================
 *
 *       Filename:  listing_0813.cpp
 *
 *    Description:  A Demonstration of Bad Programming Using Invalid Pointers
 *
 *        Version:  1.0
 *        Created:  2018年10月14日 09时07分35秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  bo lee
 *   Organization:  !!Problem!!  correction see listing_0814.cpp
 *
 * =====================================================================================
 */
#include<iostream>
using namespace std;

int main()
{
    // uninitialized pointer (bad)
    int* pTemperature;

    cout << "Is it sunny (y/n)?" << endl;
    char UserInput = 'y';
    cin >> UserInput;

    if (UserInput == 'y')
    {
        pTemperature = new int;
        *pTemperature = 30;
    }

    // pTemperature contains invalid value if user entered 'n'
    cout << "Temperature is: " << *pTemperature;
    cout << endl;
    cout << "address: " << hex << pTemperature << endl;
    // delete also being invoked for those cases new wasn't done delete
    // pTemperature;
    delete pTemperature;

    return 0;
}

