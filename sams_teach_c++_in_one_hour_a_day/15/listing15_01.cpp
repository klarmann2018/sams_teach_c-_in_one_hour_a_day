/*
 * =====================================================================================
 *
 *       Filename:  listing15_01.cpp
 *
 *    Description:  Find an Element and Its Position in a Vector
 *
 *        Version:  1.0
 *        Created:  02/05/2020 08:09:33 PM
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
#include<algorithm>
using namespace std;

int main()
{
    // A dynamic array of integers
    vector<int> vecIntegerArray;

    // Insert sample integers into the array
    vecIntegerArray.push_back(50);
    vecIntegerArray.push_back(2991);
    vecIntegerArray.push_back(23);
    vecIntegerArray.push_back(9999);

    cout << "The contents of the vector are: " << endl;

    // Walk the vector and read values using an iterator
    //vector<int>::iterator iArrayWalker = vecIntegerArray.begin();
    auto iArrayWalker = vecIntegerArray.begin();

    while(iArrayWalker != vecIntegerArray.end())
    {
        // Write the value to the screen
        cout << *iArrayWalker << endl;

        // Increment the iterator to access the next element;
        ++ iArrayWalker;
    }

    // Find an element (say 2991) in the array using the 'find' algorithm ...
    vector<int> :: iterator iElement = find(vecIntegerArray.begin(), vecIntegerArray.end(), 9999);

    // Check if value was find
    if(iElement != vecIntegerArray.end())
    {
        // Value was found... Determine position in the array:
        int Position = distance(vecIntegerArray.begin(), iElement);
        cout << "Value " << *iElement;
        cout << " found in the vector at postion: " << Position << endl;
    }
    else 
        cout << "not found in the vector!!" << endl;

    return 0;
}

