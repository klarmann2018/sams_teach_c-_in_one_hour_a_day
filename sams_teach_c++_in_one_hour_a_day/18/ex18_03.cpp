/*
 * =====================================================================================
 *
 *       Filename:  ex18_03.cpp
 *
 *    Description:  Write a program that inserts the contents of a vector into an STL list using
   the list's insert function.
 *
 *        Version:  1.0
 *        Created:  2020年03月23日 20时06分41秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>
#include <vector>
#include <list>
using namespace std;
template<typename T>
void DisplayContents(const T& input)
{
    for(auto iElement = input.cbegin()
            ; iElement != input.cend()
            ; ++ iElement)
        cout << * iElement << ' ';
    cout << endl;
}
int main()
{
    vector<int> vecIntegers;
    vecIntegers.push_back(111);
    vecIntegers.push_back(222);
    vecIntegers.push_back(444);
    cout << "vector is: " << endl;
    DisplayContents(vecIntegers);

    list<int> listIntegers;
    for(auto iElement = vecIntegers.cbegin()
            ; iElement != vecIntegers.cend()
            ; ++ iElement)
    {
       listIntegers.push_back(*iElement) ;
    }

    cout << "the list:" << endl;
    DisplayContents(listIntegers);
    return 0;
}

