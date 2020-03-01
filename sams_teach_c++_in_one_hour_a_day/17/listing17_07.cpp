/*
 * =====================================================================================
 *
 *       Filename:  listing17_07.cpp
 *
 *    Description:  Demonstration of size() and capacity()
 *
 *        Version:  1.0
 *        Created:  02/20/2020 07:42:54 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  bo lee
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>
#include<vector>

int main()
{
    using namespace std;

    // Instantiate a vector object that holds 5 integers of default value
    vector<int> vecIntegers(5);

    cout << "Vector of integers was instantiated with " << endl;
    cout << "Size: " << vecIntegers.size();
    cout << ", Capacity: " << vecIntegers.capacity() << endl;

    // Inserting a 6th element in to the vector
    vecIntegers.push_back(666);

    cout << "After inserting an additional element... " << endl;
    cout <<"Size: " << vecIntegers.size();
    cout <<", Capacity: " << vecIntegers.capacity() << endl;

    // Inserting another element
    vecIntegers.push_back(777);

    cout << "After inserting yet another element..." << endl;
    cout << "Size: " << vecIntegers.size();
    cout << ", Capacity: " << vecIntegers.capacity() << endl;

    return 0;
}

