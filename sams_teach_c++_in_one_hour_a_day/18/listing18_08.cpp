/*
 * =====================================================================================
 *
 *       Filename:  listing18_08.cpp
 *
 *    Description:  Basic Insertion and Removal Operations on a forward_list
 *
 *        Version:  1.0
 *        Created:  02/23/2020 06:47:18 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  bo lee
 *   Organization:  
 *
 * =====================================================================================
 */
#include <forward_list>
#include<iostream>
using namespace std;

template<typename T>
void DisplayContents(const T& Input)
{
    for (auto iElement = Input.cbegin() // auto and cbegin: C++11
            ; iElement != Input.cend()
            ; ++ iElement)
        cout << *iElement << ' ' ;

    cout << endl;
}


int main()
{
    forward_list<int> flistIntegers;
    flistIntegers.push_front(0);
    flistIntegers.push_front(2);
    flistIntegers.push_front(2);
    flistIntegers.push_front(4);
    flistIntegers.push_front(3);
    flistIntegers.push_front(1);

    cout << "Contents of forward_list: " << endl;
    DisplayContents(flistIntegers);

    flistIntegers.remove(2);
    flistIntegers.sort();
    cout << "Contents after removing 2 and sorting: " << endl;
    DisplayContents(flistIntegers);
    return 0;
}
