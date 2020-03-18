/*
 * =====================================================================================
 *
 *       Filename:  listing23_11.cpp
 *
 *    Description:  Using partition() and stable_partition() to Partition a
 *    Range of Integers into Even and Odd Values
 *
 *        Version:  1.0
 *        Created:  03/14/2020 02:52:10 PM
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

bool IsEven(const int& nNumber)
{
    return ((nNumber % 2) == 0);
}

template<typename T>
void DisplayContents(const T& Input)
{
    for( auto iElement = Input.cbegin() // auto, cbegin(): C++11                    
            ; iElement != Input.cend()  // cend() is new in C++11
            ; ++ iElement)
        cout << *iElement << ' ';
    cout << "| Number of elements: " << Input.size() << endl;
}

int main()
{
    vector<int> vecIntegers;

    for(int nNum = 0; nNum < 10; ++ nNum)
        vecIntegers.push_back(nNum);

    cout << "The initial contents: " << endl;
    DisplayContents(vecIntegers);

    vector<int> vecCopy(vecIntegers);

    cout << "The effect of using partition(): " << endl;
    partition(vecIntegers.begin(), vecIntegers.end(), IsEven);
    DisplayContents(vecIntegers);

    cout << "The effect of using stable_partition():" << endl;
    stable_partition(vecCopy.begin(), vecCopy.end(), IsEven);
    DisplayContents(vecCopy);

    return 0;
}

