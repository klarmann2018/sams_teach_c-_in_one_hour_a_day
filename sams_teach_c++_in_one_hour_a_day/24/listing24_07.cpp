/*
 * =====================================================================================
 *
 *       Filename:  listing24_07.cpp
 *
 *    Description:  Instantiating a Priority Queue That Holds the Smallest Value
 *    at the Top
 *
 *        Version:  1.0
 *        Created:  03/14/2020 09:44:45 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  bo lee
 *   Organization:  
 *
 * =====================================================================================
 */
#include <queue>
#include <iostream>

int main()
{
    using namespace std;

    // Define a priority_queue object with greater<int> as predicate
    priority_queue<int, vector<int>, greater<int>> pqIntegers;

    cout << "Inserting {10, 5, -1, 20} into the priority queue" << endl;
    pqIntegers.push(10);
    pqIntegers.push(5);
    pqIntegers.push(-1);
    pqIntegers.push(20);

    cout << "Deleting " << pqIntegers.size() << " elements" << endl;
    while(!pqIntegers.empty())
    {                                   
        cout << "Deleting topmost element " << pqIntegers.top() << endl;
        pqIntegers.pop();
    }

    return 0;
}

