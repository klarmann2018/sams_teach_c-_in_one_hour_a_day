/*
 * =====================================================================================
 *
 *       Filename:  listing20_04.cpp
 *
 *    Description:  Erasing Elements from a multimap
 *
 *        Version:  1.0
 *        Created:  02/29/2020 04:20:01 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  bo lee
 *   Organization:  
 *
 * =====================================================================================
 */
#include <map>
#include<iostream>
#include<string>
using namespace std;

template<typename T>
void DisplayContents(const T& Input)
{
    for(auto iElement = Input.cbegin() // auto and cbegin(): C++11
            ; iElement != Input.cend() // cend() is new in C++11
            ; ++ iElement)
        cout << iElement->first << " -> " << iElement -> second << endl;

    cout << endl;
}

int main()
{
    multimap<int, string> mmapIntToString;

    // Insert key-value pairs into the multimap
    mmapIntToString.insert(make_pair(3, "Three"));
    mmapIntToString.insert(make_pair(45, "Forty Five"));
    mmapIntToString.insert(make_pair(-1, "Minus One"));
    mmapIntToString.insert(make_pair(1000, "Thousand"));

    // Insert duplicates into the multimap
    mmapIntToString.insert(make_pair(-1, "Minus One"));
    mmapIntToString.insert(make_pair(1000, "Thousand"));

    cout << "The multimap contains " << mmapIntToString.size();
    cout << " key-value pairs. " << "They are: " << endl;
    DisplayContents(mmapIntToString);

    // Erasing an element with key as -1 from the multimap
    auto NumPairErased = mmapIntToString.erase(-1);
    cout << "Erased " << NumPairErased << " pairs with -1 as key." << endl;

    // Erase an element given an iterator from the multimap
    auto iPairLocator = mmapIntToString.find(45);
    if(iPairLocator != mmapIntToString.cend())
    {
        mmapIntToString.erase(iPairLocator);
        cout << "Erased a pair with 45 as key using an iterator" << endl;
    }

    // Erase a range from the multimap ...
    cout << "Erasing the range of pairs with 1000 as key. " << endl;
    mmapIntToString.erase(mmapIntToString.lower_bound(1000), mmapIntToString.upper_bound(1000));

    cout << "The multimap now contains " << mmapIntToString.size();
    cout << " key-value pair(s)." << "They are: " << endl;
    DisplayContents(mmapIntToString);

    return 0;
}

