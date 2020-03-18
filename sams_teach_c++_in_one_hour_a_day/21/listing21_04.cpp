/*
 * =====================================================================================
 *
 *       Filename:  listing21_04.cpp
 *
 *    Description:  Unary Predicate IsMultiple Used with std::find_if() to Find
 *    an Element in a vector That Is a Multiple of a User-Supplied Divisor
 *
 *        Version:  1.0
 *        Created:  03/08/2020 06:40:06 AM
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

// A structure as a unary predicate 
template<typename numberType>
struct IsMultiple
{
    numberType Divisor;

    IsMultiple(const numberType& divisor)
    {
        Divisor = divisor;
    }

    bool operator()(const numberType& element) const
    {
        // Check if the divisor is a multiple of the divisor
        return ((element % Divisor) == 0);
    }
};

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

    // Find the first element that is a multiple of 4 in the collection 
    auto iElement = find_if( vecIntegers.cbegin()
            , vecIntegers.cend()
            , IsMultiple<int>(Divisor));

    if(iElement != vecIntegers.cend())
    {
        cout << "First element in vector divisible by " << Divisor;
        cout << ": " << *iElement << endl;
    }

    return 0;
}
