/*
 * =====================================================================================
 *
 *       Filename:  listing19_03.cpp
 *
 *    Description:  Using the find Member Function
 *
 *        Version:  1.0
 *        Created:  02/24/2020 07:35:36 PM
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

int main()
{
    set<int> setIntegers;

    // Insert some random values
    setIntegers.insert(43);
    setIntegers.insert(78);
    setIntegers.insert(-1);
    setIntegers.insert(124);

    // Write contents of the set to the screen
    for(auto iElement = setIntegers.cbegin()
            ; iElement != setIntegers.cend()
            ; ++ iElement)
        cout << *iElement << endl;

    // Try finding an element
    auto iElementFound = setIntegers.find(-1);

    // Check if found ...
    if(iElementFound != setIntegers.cend())
        cout << "Element " << *iElementFound << " found! " << endl;
    else 
        cout << "Element not found in set! " << endl;

    // Try finding another element
    auto iAnotherFind = setIntegers.find(12345);

    // Check if found...
    if(iAnotherFind != setIntegers.cend())
        cout << "Element " << *iAnotherFind << " found! " << endl;
    else 
        cout << "Element 12345 not found in set!" << endl;

    return 0;
}

