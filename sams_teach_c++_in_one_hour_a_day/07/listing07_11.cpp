/*
 * =====================================================================================
 *
 *       Filename:  listing07_11.cpp
 *
 *    Description:  Using Lambda Functions to Display Elements in an Array and
 *    to Sort Them
 *
 *        Version:  1.0
 *        Created:  2018年10月10日 15时10分43秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  bo lee
 *
 *   Organization:  
 *
 * =====================================================================================
 */
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

void DisplayNums(vector<int>& DynArray)
{
    for_each (DynArray.begin(), DynArray.end(), \
            [](int Element){cout << Element << " "; }); // lambda

    
    cout << endl;
}

int main()
{
    vector<int> MyNumbers;
    MyNumbers.push_back(501);
    MyNumbers.push_back(-1);
    MyNumbers.push_back(25);
    MyNumbers.push_back(-35);

    DisplayNums(MyNumbers);

    cout << "Sorting them in descending order" << endl;

    sort (MyNumbers.begin(), MyNumbers.end(), \
        [](int Num1, int Num2) {return (Num2 < Num1 );});
    DisplayNums(MyNumbers);

    return 0;
}
