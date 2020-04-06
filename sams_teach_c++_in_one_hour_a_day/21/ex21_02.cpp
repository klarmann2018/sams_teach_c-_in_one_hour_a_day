/*
 * =====================================================================================
 *
 *       Filename:  ex21_02.cpp
 *
 *    Description:  Extend this predicate to indicate the number of times it was used.
 *
 *        Version:  1.0
 *        Created:  2020年03月28日 21时41分33秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  bo lee
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

template<typename T>
struct FuncDisplayElement
{
    int count;
   FuncDisplayElement():count(0){}

   void operator()(const T& element)
   {
        cout << element << ' ';
        ++count;    
   }
};

int main()
{
    vector<double> vecIntegers;
    vecIntegers.push_back(0.4);
    vecIntegers.push_back(2.3);
    vecIntegers.push_back(5.4);

    FuncDisplayElement<double> Result;

    Result=for_each(vecIntegers.begin(),vecIntegers.end(),FuncDisplayElement<double>());

    cout << endl;
    cout << Result.count << endl;
    return 0;
}
