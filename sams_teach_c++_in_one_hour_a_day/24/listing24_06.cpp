/*
 * =====================================================================================
 *
 *       Filename:  listing24_06.cpp
 *
 *    Description:  Working with a priority_queue Using push(), top(), and pop()
 *
 *        Version:  1.0
 *        Created:  03/14/2020 09:37:40 PM
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
    priority_queue<int> pqIntegers;
    cout << "Inserting {10, 5, -1, 20} into the priority_queue" << endl;
    pqIntegers.push(10);
    pqIntegers.push(5);
    pqIntegers.push(-1);
    pqIntegers.push(20);

    cout << "Deleting the " << pqIntegers.size() << " elements" << endl;
    while(!pqIntegers.empty())
    {
        cout << "Deleting topmost element: " << pqIntegers.top() << endl;
        pqIntegers.pop();
    }

    return 0;
}

