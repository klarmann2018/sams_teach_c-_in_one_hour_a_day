/*
 * =====================================================================================
 *
 *       Filename:  listing24_01.cpp
 *
 *    Description:  Instantiation of an STL Stack
 *
 *        Version:  1.0
 *        Created:  03/14/2020 08:35:08 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  bo lee
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stack>
#include<vector>

int main()
{
    using namespace std;

    // A stack of integers
    stack<int> stackInts;

    // A stack of doubles
    stack<double> stackDoubles;

    // A stack of doubles contained in a vector
    stack<double, vector<double>> stackDoublesInVector;

    // initializing one stack to be a copy of another
    stack<int> stackIntsCopy(stackInts);

    return 0;
}

