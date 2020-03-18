/*
 * =====================================================================================
 *
 *       Filename:  listing24_03.cpp
 *
 *    Description:  Instantiating an STL Queue
 *
 *        Version:  1.0
 *        Created:  03/14/2020 09:00:32 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  bo lee
 *   Organization:  
 *
 * =====================================================================================
 */
#include <queue>
#include <list>

int main()
{
    using namespace std;

    // A queue of integers
    queue<int> qIntegers;

    // A queue of doubles
    queue<double> qDoubles;

    // A queue of doubles stored internally in a list
    queue<double, list<double>> qDoublesInList;

    // one queue created as a copy of another
    queue<int> qCopy(qIntegers);

    return 0;
}

