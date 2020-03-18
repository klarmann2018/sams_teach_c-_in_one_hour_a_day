/*
 * =====================================================================================
 *
 *       Filename:  listing24_05.cpp
 *
 *    Description:  Instantiating an STL priority_queue
 *
 *        Version:  1.0
 *        Created:  03/14/2020 09:25:16 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  bo lee
 *   Organization:  
 *
 * =====================================================================================
 */
#include <queue>

int main()
{
    using namespace std;

    // A priority queue of integers sorted using std::less<> (default)
    priority_queue<int> pqIntegers;

    // A priority queue of doubles
    priority_queue<double> pqDoubles;

    // A priority queue of intergers sorted using std::greater<>
    priority_queue<int, deque<int>, greater<int> > pqIntegers_Inverse;

    // a priority queue created as a copy of another
    priority_queue<int> pqCopy(pqIntegers);

    return 0;
}


