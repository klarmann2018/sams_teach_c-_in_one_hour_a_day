/*
 * =====================================================================================
 *
 *       Filename:  listing24_04.cpp
 *
 *    Description:  Inserting, Removing, and Inspecting Elements in a queue of
 *    Integers
 *
 *        Version:  1.0
 *        Created:  03/14/2020 09:08:16 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  bo lee
 *   Organization:  
 *
 * =====================================================================================
 */
#include <queue>
#include<iostream>

int main()
{
    using namespace std;
    queue<int> qIntegers;

    cout << "Inserting {10, 5, -1, 20} into queue" << endl;
    qIntegers.push(10);
    qIntegers.push(5);  // elements pushed are inserted at the end
    qIntegers.push(-1);
    qIntegers.push(20);

    cout << "Queue contains " << qIntegers.size() << " elements" << endl;
    cout << "Element at front: " << qIntegers.front() << endl;
    cout << "Element at back: " << qIntegers.back() << endl;

    while(qIntegers.size() != 0)
    {
        cout << "Deleting element: " << qIntegers.front() << endl;
        qIntegers.pop();    // removes element at front
    }

    if(qIntegers.empty()) // true as all elements have been pop()-ed
        cout << "The queue is now empty!" << endl;

    return 0;
}

