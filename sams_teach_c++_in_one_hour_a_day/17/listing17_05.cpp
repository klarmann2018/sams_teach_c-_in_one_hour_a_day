/*
 * =====================================================================================
 *
 *       Filename:  listing17_05.cpp
 *
 *    Description:  Accessing Elements in a Vector Using Pointer
 *    Semantics(Iterators)
 *
 *        Version:  1.0
 *        Created:  02/18/2020 06:42:01 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  bo lee
 *   Organization:  
 *
 * =====================================================================================
 */
#include<iostream>
#include<vector>

int main()
{
    using namespace std;
    vector<int> vecIntegers;

    // Insert sample integers into the vector:
    vecIntegers.push_back(50);
    vecIntegers.push_back(1);
    vecIntegers.push_back(987);
    vecIntegers.push_back(1001);

    // Access objects in a vector using iterators:
    vector<int>::iterator iElementLocator = vecIntegers.begin();
    // iterator declared using C++11 keyword auto (uncomment next line)
    // auto iElementLocator = vecIntegers.begin();
    
    while(iElementLocator != vecIntegers.end())
    {
        size_t Index = distance(vecIntegers.begin(), iElementLocator);

        cout << "Elements at position ";
        cout << Index << " is: " << *iElementLocator << endl;

        // move to the next element
        ++ iElementLocator;
    }

    return 0;
}
