/*
 * =====================================================================================
 *
 *       Filename:  listing19_02.cpp
 *
 *    Description:  Inserting Elements in an STL set and multiset
 *
 *        Version:  1.0
 *        Created:  02/24/2020 07:28:11 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  bo lee
 *   Organization:  
 *
 * =====================================================================================
 */
#include<set>
#include<iostream>
using namespace std;

template<typename T>
void DisplayContents(const T& Input)
{
    for(auto iElement = Input.cbegin() // auto, cbegin(): C++11
            ; iElement != Input.cend()
            ; ++ iElement)
        cout << *iElement << ' ';
    cout << endl;
}

int main()
{
    set<int> setIntegers;
    multiset<int> msetIntegers;

    setIntegers.insert(60);
    setIntegers.insert(-1);
    setIntegers.insert(3000);
    cout << "Writing the contents of the set to the screen " << endl;
    DisplayContents(setIntegers);

    msetIntegers.insert(setIntegers.cbegin(), setIntegers.cend());
    msetIntegers.insert(3000);

    cout << "Writing the contents of the multiset to the screen " << endl;
    DisplayContents(msetIntegers);
    
    return 0;
}

