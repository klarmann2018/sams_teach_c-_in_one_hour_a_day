/*
 * =====================================================================================
 *
 *       Filename:  listing23_07.cpp
 *
 *    Description:  Using std::transform() with Unary and Binary Functions
 *
 *        Version:  1.0
 *        Created:  03/12/2020 06:14:21 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  bo lee
 *   Organization:  
 *
 * =====================================================================================
 */
#include <algorithm>
#include<string>
#include<vector>
#include<deque>
#include<iostream>
#include<functional>

int main()
{
    using namespace std;

    string Sample("This is a Test string!");
    cout << "The sample string is: " << Sample << endl;

    string strLowerCaseCopy;
    strLowerCaseCopy.resize(Sample.size());

    int tolower(int);
    transform( Sample.begin()       // Start of source range
            , Sample.end()      // end of source range
            , strLowerCaseCopy.begin()   // start of destination range
            , tolower);     // unary function

    cout << "Result of 'transform' on the string with 'tolower': " << endl;
    cout << "\"" << strLowerCaseCopy << "\"" << endl << endl;

    // Two sample vectors of integers...
    vector<int> vecIntegers1, vecIntegers2;
    for(int nNum = 0; nNum < 10; ++ nNum)
    {
        vecIntegers1.push_back(nNum);
        vecIntegers2.push_back(10 - nNum);
    }

    // A destination range for holding the result of addition
    deque<int> dqResultAddition(vecIntegers1.size());

    transform( vecIntegers1.begin()     // start of source range 1
            , vecIntegers1.end()        // end of source range 1
            , vecIntegers2.begin()      // start of source range 2
            , dqResultAddition.begin()  // start of destination range
            , plus<int>() );            // binary function

    cout << "Result of 'transform' using binary function 'plus': " << endl;
    cout << endl << "Index Vector1 + Vector2 = Result (in Deque)" << endl;
    for(size_t nIndex = 0; nIndex < vecIntegers1.size(); ++ nIndex)
    {
        cout << nIndex << "     \t " << vecIntegers1 [nIndex] << "\t+   ";
        cout << vecIntegers2 [nIndex]   << " \t =   ";

        cout << dqResultAddition [nIndex] << endl;
    }

    return 0;
}

