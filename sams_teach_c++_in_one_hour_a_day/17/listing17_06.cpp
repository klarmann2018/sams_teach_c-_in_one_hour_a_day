/*
 * =====================================================================================
 *
 *       Filename:  listing17_06.cpp
 *
 *    Description:  Using pop_back to Erase the last Element
 *
 *        Version:  1.0
 *        Created:  02/18/2020 07:10:15 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  bo lee
 *   Organization:  
 *
 * =====================================================================================
 */
#include<iostream>
#include<vector>
using namespace std;

template <typename T>
void DisplayVector(const vector<T>& vecInput)
{
    for(auto iElement = vecInput.cbegin() // auto and cbegin(): c++11
            ; iElement != vecInput.cend() // cend() is new in c++11
            ; ++ iElement)
        cout << *iElement << ' ';

    cout << endl;
}

int main()
{
    vector<int> vecIntegers;

    // Insert sample integers into the vector:
    vecIntegers.push_back(50);
    vecIntegers.push_back(1);
    vecIntegers.push_back(987);
    vecIntegers.push_back(1001);

    cout << "Vector contains " << vecIntegers.size() << " elements: " ;
    DisplayVector(vecIntegers);

    // Erase one element at the end
    vecIntegers.pop_back();

    cout << "After a call to pop_back()" << endl;
    cout << "Vector contains " << vecIntegers.size() << " elements: " ;
    DisplayVector(vecIntegers);

    return 0;
}
