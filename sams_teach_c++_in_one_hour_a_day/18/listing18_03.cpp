/*
 * =====================================================================================
 *
 *       Filename:  listing18_03.cpp
 *
 *    Description:  The Various Methods of Inserting Elements in a List
 *
 *        Version:  1.0
 *        Created:  02/22/2020 10:27:34 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  bo lee 
 *   Organization:  
 *
 * =====================================================================================
 */
#include<list>
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
    list<int> listIntegers1;

    // Inserting elements at the beginning...
    listIntegers1.insert(listIntegers1.begin(), 2);
    listIntegers1.insert(listIntegers1.begin(),1);

    // Inserting an element at the end...
    listIntegers1.insert(listIntegers1.end(), 3);

    cout << "The contents of list 1 after inserting elements: " << endl;
    DisplayContents(listIntegers1);

    list<int> listIntegers2;

    // Inserting 4 elements of the same value 0...
    listIntegers2.insert(listIntegers2.begin(), 4, 0);

    cout << "The contents of list 2 after inserting '";
    cout << listIntegers2.size() << "' elements of a value:" << endl;
    DisplayContents(listIntegers2);

    list<int> listIntegers3;

    // Inserting elements from another list at the beginning...
    listIntegers3.insert(listIntegers3.begin(),
            listIntegers1.begin(), listIntegers1.end());

    cout << "The contents of list 3 after inserting the contents of ";
    cout << "list 1 at the beginning: " << endl;
    DisplayContents(listIntegers3);

    // Inserting elements from another list at the end...
    listIntegers3.insert(listIntegers3.end(),
            listIntegers2.begin(), listIntegers2.end());

    cout << "The contents of list 3 after inserting ";
    cout << "the contents of list 2 at the end: " << endl;
    DisplayContents(listIntegers3);

    return 0;
}
