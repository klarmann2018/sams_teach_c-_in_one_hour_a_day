/*
 * =====================================================================================
 *
 *       Filename:  listing18_01.cpp
 *
 *    Description:  Different Forms of Instantiating std::list, Specifying
 *    Number of Elements and Initial Values
 *
 *        Version:  1.0
 *        Created:  02/22/2020 09:30:05 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  bo lee
 *   Organization:  
 *
 * =====================================================================================
 */
#include<list>
#include<vector>
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
    //list<int> listIntegers;

    //listIntegers.push_front(10);
    //listIntegers.push_front(2011);
    //listIntegers.push_front(-1);
    //listIntegers.push_front(9999);
    
    // instantiate an empty list
    list<int> listIntegers;
    cout << "listIntegers:" <<endl;
    DisplayContents(listIntegers);

    // instantiate a list with 10 integers
    list<int> listWith10Integers(10);
    cout << "listWith10Integers: " << endl;
    DisplayContents(listWith10Integers);

    // instantiate a list with 4 integers, each initialized to 99
    list<int> listWith4IntegerEach99(4, 99);
    cout << "listWith4IntegerEach99: " << endl;
    DisplayContents(listWith4IntegerEach99);

    // create an exact copy of an existing list
    list<int> listCopyAnother(listWith4IntegerEach99);
    cout << "listCopyAnother: " << endl;
    DisplayContents(listCopyAnother);

    // a vector with 10 integers, each 2011
    vector<int> vecIntegers(10, 2011);
    cout << "vecIntegers: " << endl;
    DisplayContents(vecIntegers);

    // instantiate a list using values from another container
    list<int> listContainsCopyOfAnother(vecIntegers.cbegin(),
            vecIntegers.cend());
    cout << "listContainsCopyOfAnother: "  << endl;
    DisplayContents(listContainsCopyOfAnother);

    return 0;
}
