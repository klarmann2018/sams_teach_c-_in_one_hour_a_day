/*
 * =====================================================================================
 *
 *       Filename:  listing18_05.cpp
 *
 *    Description:  Reversing Elements in a List
 *
 *        Version:  1.0
 *        Created:  02/23/2020 06:48:29 AM
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
    for(auto iElement = Input.cbegin() // auto and cbegin: C++11
            ; iElement != Input.cend()
            ; ++ iElement )
        cout << *iElement << ' ';

    cout << endl;
}

int main()
{
    std::list<int> listIntegers;

    // Insert elements at the beginning and end
    listIntegers.push_front(4);
    listIntegers.push_front(3);
    listIntegers.push_front(2);
    listIntegers.push_front(1);
    listIntegers.push_front(0);
    listIntegers.push_front(5);
    
    cout << "Initial contents of the list: " << endl;
    DisplayContents(listIntegers);

    listIntegers.reverse();

    cout << "Contents of the list after using reverse(): " << endl;
    DisplayContents(listIntegers);

    return 0;
}

