/*
 * =====================================================================================
 *
 *       Filename:  listing23_12.cpp
 *
 *    Description:  Using lower_bound() and upper_bound() to Insert in a Sorted
 *    Collection
 *
 *        Version:  1.0
 *        Created:  03/14/2020 04:12:29 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  bo lee
 *   Organization:  
 *
 * =====================================================================================
 */
#include <algorithm>
#include<list>
#include<string>
#include<iostream>
using namespace std;

template<typename T>
void DisplayContents(const T& Input)
{
    for(auto iElement = Input.cbegin()  // auto, cbegin: C++11
            ; iElement != Input.cend()  // cend() is new in C++11
            ; ++ iElement)
        cout << *iElement << endl;
}

int main()
{
    list<string> listNames;

    // Insert sample values
    listNames.push_back("John Doe");
    listNames.push_back("Brad Pitt");
    listNames.push_back("Jack Nicholson");
    listNames.push_back("Sean Penn");
    listNames.push_back("Anna Hoover");

    cout << "The sorted contents of the list are: " << endl;
    listNames.sort();
    DisplayContents(listNames);

    cout << "The lowest index where \"Brad Pitt\" can be inserted is: ";
    auto iMinInsertPos = lower_bound(listNames.begin(), listNames.end(), "Brad Pitt");
    cout << distance(listNames.begin(), iMinInsertPos) << endl;

    cout << "The highest index where \"Brad Pitt\" can be inserted is: ";
    auto iMaxInsertPos = upper_bound(listNames.begin(), listNames.end(), "Brad Pitt");
    cout << distance(listNames.begin(), iMaxInsertPos) << endl;

    cout << endl;

    cout << "List after inserting Brad Pitt in sorted order: " << endl;
    //listNames.insert(iMinInsertPos, "Brad Pitt");
    listNames.insert(iMinInsertPos, "bo lee");

    DisplayContents(listNames);
    return 0;
}

