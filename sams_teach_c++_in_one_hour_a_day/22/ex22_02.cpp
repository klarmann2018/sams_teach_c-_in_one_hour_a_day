/*
 * =====================================================================================
 *
 *       Filename:  ex22_02.cpp
 *
 *    Description:  Write a lambda function that, when used in for_each, adds a user-specified
   value to that in a container such as vector.
 *
 *        Version:  1.0
 *        Created:  2020年03月29日 10时33分50秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  bo lee
 *   Organization:  
 *
 * =====================================================================================
 */
#include<algorithm>
#include<vector>
#include <iostream>

using namespace std;
template<typename T>
void DisplayContent(T& input)
{
    for(auto iElement = input.cbegin()
            ; iElement != input.cend()
            ; ++ iElement)
        cout << * iElement << " " ;
}

int main()
{
    vector<int> vecIntegers;
    int inputInteger;
    cout << "Please enter integer as input value(until -1): " << endl;
    cin >> inputInteger;
    while(inputInteger!=-1)
    {
        vecIntegers.push_back(inputInteger);
        cout << "ok, please input continue: " << endl;
        cin >> inputInteger;
    }

    cout << "finish!" << endl;

    for_each(vecIntegers.begin(), vecIntegers.end(), [](int& element){cout << element << ' ';});
    cout << endl;

    return 0;
}

