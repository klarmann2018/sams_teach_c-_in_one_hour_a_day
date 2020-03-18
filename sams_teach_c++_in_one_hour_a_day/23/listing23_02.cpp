/*
 * =====================================================================================
 *
 *       Filename:  listing23_02.cpp
 *
 *    Description:  Demonstrates the Usage of std::count() to Determine Number
 *    of Elements with a Value and count_if() to Determine Number of Elements
 *    That Fulfill a Condition
 *
 *        Version:  1.0
 *        Created:  03/09/2020 07:22:08 PM
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

// A unary predicate for the *_if functions
template<typename elementType>
bool IsEven(const elementType& number)
{
    return ((number % 2) == 0); // true, if even
}

int main()
{
    using namespace std;
    vector<int> vecIntegers;

    cout << "Populating a vector<int> with values from -9 to 9" << endl;
    for(int nNum = -9; nNum < 10; ++ nNum)
    {
        vecIntegers.push_back(nNum);
    }

    // Use count to determine the number of '0's in the vector
    size_t nNumZeros = count(vecIntegers.begin(), vecIntegers.end(), 0);
    cout << "Number of instances of '0': " << nNumZeros << endl << endl;

    // Use the count_if algorithm with the unary predicate IsEven:
    size_t nNumEvenElements = count_if(vecIntegers.begin(), vecIntegers.end(), IsEven<int>);
    cout << "Number of even elements: " << nNumEvenElements << endl;
    cout << "Number of odd elements: ";
    cout << vecIntegers.size() - nNumEvenElements << endl;

    return 0;
}

