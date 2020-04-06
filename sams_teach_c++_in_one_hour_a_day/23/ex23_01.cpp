/*
 * =====================================================================================
 *
 *       Filename:  ex23_01.cpp
 *
 *    Description:  Write a binary predicate that accepts strings as input arguments and returns
   a value based on case-insensitive comparison.
 *
 *        Version:  1.0
 *        Created:  2020年03月31日 20时47分12秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  bo lee
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>
#include<string>
#include<algorithm>
using namespace std;

template <typename T>
bool PredicateCaseInsensitive(const T& input1, const T& input2)
{
    T temp1;
    temp1.resize(input1.size());
    transform(input1.begin(), input1.end(),temp1.begin(), ::tolower);

    T temp2;
    temp2.resize(input2.size());
    transform(input2.begin(), input2.end(), temp2.begin(), ::tolower);

    return (temp1<temp2);
}

int main()
{
    cout << "Please input input1(string): " <<endl;
    string input1;
    cin>> input1;

    cout << "Please input input2(string): " << endl;
    string input2;
    cin >> input2;

    int i = PredicateCaseInsensitive<string>(input1, input2);
    cout << "i: " << i << endl;
    return 0;
}

