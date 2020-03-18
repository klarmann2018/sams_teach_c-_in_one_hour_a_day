/*
 * =====================================================================================
 *
 *       Filename:  listing22_03.cpp
 *
 *    Description:  Demonstrating the Use of Lambda Expressions That Hold State
 *    to Check If One Number Is Divisible by Another
 *
 *        Version:  1.0
 *        Created:  03/08/2020 07:07:20 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  bo lee
 *   Organization:  
 *
 * =====================================================================================
 */
#include <algorithm>
#include<vector>
#include<iostream>
using namespace std;

int main()
{
    vector<int> vecIntegers;
    cout << "The vector contains the following sample values: ";

    // Insert sample values: 25 - 31
    for(int nCount = 25; nCount < 32; ++ nCount)
    {
        vecIntegers.push_back(nCount);
        cout << nCount << ' ';
    }
    cout << endl << "Enter divisor (> 0): ";
    int Divisor = 2;
    cin >> Divisor;

    // Find the first element that is a multiple of divisor
    vector<int> :: iterator iElement;
    iElement = find_if(vecIntegers.begin()
            , vecIntegers.end()
            , [Divisor](int dividend) {return (dividend % Divisor) == 0;} );

    if(iElement != vecIntegers.end())
    {
        cout << "First element in vector divisible by " << Divisor;
        cout << ": " << *iElement << endl;
    }
    return 0;
}

