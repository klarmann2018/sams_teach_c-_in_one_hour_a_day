/*
 * =====================================================================================
 *
 *       Filename:  ex19_03.cpp
 *
 *    Description: 3. Demonstrate via a simple program that a set cannot accept duplicate entries whereas a multiset can.
 *
 *        Version:  1.0
 *        Created:  2020年03月26日 18时23分18秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  bo lee
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>
#include <set>
using namespace std;
template<typename T>
void DisplayContent(const T& input) 
{
    for(auto iElement = input.cbegin()
            ; iElement != input.cend()
            ; ++ iElement)
        cout << * iElement << " ";
    cout << endl;
}

int main()
{
    set<int> setIntegers;
    setIntegers.insert(11);
    setIntegers.insert(12);
    DisplayContent(setIntegers);

    setIntegers.insert(11);
    cout << "After insert duplicate entries:" << endl;
    DisplayContent(setIntegers);

    multiset<int> msetIntegers;
    msetIntegers.insert(11);
    msetIntegers.insert(12);
    msetIntegers.insert(11);
    cout << "multiset with duplicate entries:" << endl;
    DisplayContent(msetIntegers);

    return 0;
}


