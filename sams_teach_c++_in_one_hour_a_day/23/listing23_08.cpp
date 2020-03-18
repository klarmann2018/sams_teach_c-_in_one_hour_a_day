/*
 * =====================================================================================
 *
 *       Filename:  listing23_08.cpp
 *
 *    Description:  A Sample That Demostrates copy(), copy_if(), remove(), and
 *    remove_if() to Copy a list into a vector and Remove 0s and Even Numbers
 *
 *        Version:  1.0
 *        Created:  03/12/2020 06:44:30 AM
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
#include<list>
#include<iostream>
using namespace std;

template <typename T>
void DisplayContents(const T& Input)
{
    for(auto iElement = Input.cbegin()  // auto, cbegin and cend: C++11
            ; iElement != Input.cend()
            ; ++ iElement)
        cout << *iElement << ' ';

    cout << "| Number of elements: " << Input.size() << endl;
}

int main()
{
    list<int> listIntegers;
    for(int nCount = 0; nCount < 10; ++ nCount)
        listIntegers.push_back(nCount);

    cout << "Source (list) contains: " << endl;
    DisplayContents(listIntegers);

    // Initialize the vector to hold twice as many elements as the list
    vector<int> vecIntegers(listIntegers.size() * 2);

    auto iLastPos = copy( listIntegers.begin()  // start source range
            , listIntegers.end()    // end source range
            , vecIntegers.begin()   // start dest range
            );
    
    // copy odd numbers from list into vector
    copy_if( listIntegers.begin(), listIntegers.end(), iLastPos, [](int element){return ((element % 2) == 1);});

    cout << "Destination (vector) after copy and copy_if: " << endl;
    DisplayContents(vecIntegers);

    // Remove all instances of '0', resize vector using erase()
    auto iNewEnd = remove(vecIntegers.begin(), vecIntegers.end(), 0);
    vecIntegers.erase(iNewEnd, vecIntegers.end());

    // Remove all odd numbers from the vector using remove_if
    iNewEnd = remove_if(vecIntegers.begin(), vecIntegers.end(),
            [](int element) {return ((element % 2 ) == 1); });  // predicate

    vecIntegers.erase(iNewEnd, vecIntegers.end());  // resizing

    cout << "Destination (vector) after remove, remove_if, erase: " << endl;
    DisplayContents(vecIntegers);

    return 0;
}

