/*
 * =====================================================================================
 *
 *       Filename:  ex21_01.cpp
 *
 *    Description:  Write a unary function that can be used with std::for_each to display the
   double of the input parameter.
 *
 *        Version:  1.0
 *        Created:  2020年03月28日 21时26分35秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  bo lee
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

template<typename T>
void FuncDisplayElement(const T& element)
{
    cout << element << ' ';
}

int main()
{
    vector<double> vecIntegers;
    vecIntegers.push_back(0.4);
    vecIntegers.push_back(2.3);
    vecIntegers.push_back(5.4);

    for_each(vecIntegers.begin(),vecIntegers.end(),FuncDisplayElement<double>);

    cout << endl;
    return 0;
}
