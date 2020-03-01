/*
 * =====================================================================================
 *
 *       Filename:  listing18_02.cpp
 *
 *    Description:  Inserting Elements in the List Using push_front() and
 *    push_back()
 *
 *        Version:  1.0
 *        Created:  02/22/2020 10:02:52 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  bo lee
 *   Organization:  
 *
 * =====================================================================================
 */
#include <list>
#include<iostream>
using namespace std;

template<typename T>
void DisplayContents(const T& Input)
{
    for(auto iElement = Input.cbegin() // auto and cbegin(): C++11
            ; iElement != Input.cend()
            ; ++ iElement )
        cout << *iElement << ' ';

    cout << endl;
}

int main()
{
    list<int> listIntegers;

    listIntegers.push_front(10);
    listIntegers.push_front(2011);
    listIntegers.push_back(-1);
    listIntegers.push_back(9999);

    DisplayContents(listIntegers);

    return 0;
}
