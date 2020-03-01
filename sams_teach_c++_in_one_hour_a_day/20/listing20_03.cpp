/*
 * =====================================================================================
 *
 *       Filename:  listing20_03.cpp
 *
 *    Description:  Using find() Member Function to Locate a Key-Value Pair in a
 *    map
 *
 *        Version:  1.0
 *        Created:  02/29/2020 08:34:48 AM
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
        cout << iElement->first << " -> " << iElement->second << endl;

    cout << endl;
}

int main()
{
    map<int, string> mapIntToString;

    mapIntToString.insert(make_pair(3, "Three"));
    mapIntToString.insert(make_pair(45, "Forty Five"));
    mapIntToString.insert(make_pair(-1, "Minus One"));
    mapIntToString.insert(make_pair(1000, "Thousand"));

    cout << "The map contains " << mapIntToString.size();
    cout << " key-value pairs. They are: " << endl;

    // Print the contents of the map to the screen 
    DisplayContents(mapIntToString);

    cout << "Enter the key you wish to find: ";
    int Key = 0;
    cin >> Key;

    auto iPairFound = mapIntToString.find(Key);
    if(iPairFound != mapIntToString.cend())
    {
        cout << "Key " << iPairFound->first << " points to value: ";
        cout << iPairFound->second << endl;
    }
    else
    {
        cout << "Sorry, pair with key " << Key << " not in map" << endl;
    }
    
    return 0;
}
