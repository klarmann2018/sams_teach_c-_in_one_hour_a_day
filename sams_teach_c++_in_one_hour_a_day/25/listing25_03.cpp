/*
 * =====================================================================================
 *
 *       Filename:  listing25_03.cpp
 *
 *    Description:  The Instantiation of vector<bool>
 *
 *        Version:  1.0
 *        Created:  03/14/2020 10:34:00 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  bo lee
 *   Organization:  
 *
 * =====================================================================================
 */
#include <vector>

int main()
{
    using namespace std;

    // Instantiate an object using the default constructor
    vector<bool> vecBool1;

    // Initialize a vector with 10 elements with value true
    vector<bool> vecBool2(10, true);

    // Instantiate one object as a copy of another
    vector<bool> vecBool2Copy(vecBool2);

    return 0;
}

