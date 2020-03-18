/*
 * =====================================================================================
 *
 *       Filename:  listing22_02.cpp
 *
 *    Description:  Find an Even Number in a Collection Using a lambda
 *    Expression for a Unary Predicate and Algorithm std::find_if()
 *
 *        Version:  1.0
 *        Created:  03/08/2020 06:45:38 PM
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
    vector<int> vecNums;
    vecNums.push_back(25);
    vecNums.push_back(101);
    vecNums.push_back(2011);
    vecNums.push_back(-50);
    vecNums.push_back(4);

    auto iEvenNum = find_if( vecNums.cbegin()
            , vecNums.cend()    // range to find in
            , [](const int& Num){ return ((Num % 2) == 0); });

    if( iEvenNum != vecNums.cend())
        cout << "Even number in collection is: " << *iEvenNum << endl;
    
    return 0;
}

