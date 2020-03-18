/*
 * =====================================================================================
 *
 *       Filename:  listing24_02.cpp
 *
 *    Description:  Working with a Stack of Integers
 *
 *        Version:  1.0
 *        Created:  03/14/2020 08:42:26 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  bo lee
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stack>
#include<iostream>

int main()
{
    using namespace std;
    stack<int> stackInts;

    // push: insert values at top of the stack
    cout << "Pushing {25, 10, -1, 5} on stack in that order:" << endl;
    stackInts.push(25);
    stackInts.push(10);
    stackInts.push(-1);
    stackInts.push(5);

    cout << "Stack contains " << stackInts.size() << " elements " << endl;
    while(stackInts.size() != 0)
    {
        cout << "Popping topmost elements: " << stackInts.top() << endl;
        stackInts.pop();    // pop: removes topmost element
    }

    if(stackInts.empty()) // true: due to previous pop()s
        cout << "Popping all elements empties stack!" << endl;

    return 0;
}

