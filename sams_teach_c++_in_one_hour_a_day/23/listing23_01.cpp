/*
 * =====================================================================================
 *
 *       Filename:  listing23_01.cpp
 *
 *    Description:  Using find() to Locate an Integer Value in a vector, find_if
 *    to Locate the First Even Number Given an Unary Predicate in a Lambda
 *    Expression
 *
 *        Version:  1.0
 *        Created:  03/09/2020 07:17:13 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  bo lee
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>
#include<algorithm>
#include<vector>

int main()
{
    using namespace std;
    vector<int> vecIntegers;

    // Inserting sample values -9 to 9
    for(int SampleValue = -9; SampleValue < 10; ++ SampleValue)
        vecIntegers.push_back(SampleValue);

    cout << "Enter number to find in collection: ";
    int NumToFind = 0;
    cin >> NumToFind;

    auto iElementFound = find( vecIntegers.cbegin() // Start of range
            , vecIntegers.cend()  // End of range
            , NumToFind );      // Element to find

    // Check if find succeeded
    if(iElementFound != vecIntegers.cend())
        cout << "Result: Value " << *iElementFound << " found!" << endl;
    else 
        cout << "Result: No element contains value " << NumToFind << endl;

    cout << "Finding the first even number using find_if: " << endl;

    auto iEvenNumber = find_if(vecIntegers.cbegin() // Start of range
            , vecIntegers.cend()    // End of range
            , [](int element) {return (element % 2) == 0; });
    
    if(iEvenNumber != vecIntegers.cend())
    {
        cout << "Number '" << *iEvenNumber << "' found at position [";
        cout << distance(vecIntegers.cbegin(), iEvenNumber);
        cout << "]" << endl;
    }

    return 0;
}

