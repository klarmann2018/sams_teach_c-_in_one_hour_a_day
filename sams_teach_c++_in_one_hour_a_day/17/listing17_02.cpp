/*
 * =====================================================================================
 *
 *       Filename:  listing17_02.cpp
 *
 *    Description:  Inserting Elements in a Vector Using push_back()
 *
 *        Version:  1.0
 *        Created:  02/16/2020 06:50:53 PM
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
using namespace std;

int main()
{
    vector<int> vecIntegers;

    // Insert sample integers into the vector:
    vecIntegers.push_back(50);
    vecIntegers.push_back(1);
    vecIntegers.push_back(987);
    vecIntegers.push_back(1001);

    cout << "The vector contains: ";
    cout << vecIntegers.size() << " Elements " << endl;

    return 0;
}

