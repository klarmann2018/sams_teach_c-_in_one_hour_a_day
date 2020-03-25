/*
 * =====================================================================================
 *
 *       Filename:  ex18_04.cpp
 *
 *    Description:  Write a program that inserts the contents of a vector into an STL list using
   the list's insert function.
 *
 *        Version:  1.0
 *        Created:  2020年03月23日 20时14分41秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  bo lee
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>
#include <list>
#include <string>
using namespace std;
bool SortStringPredicate(string lrs, string rrs)
{
    return (lrs > rrs); 
}
template <typename T>
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
    list<string> listStrings;
    listStrings.push_back("bo");
    listStrings.push_back("lee");
    listStrings.push_back("aaa");

    cout << "the list of strings: " << endl;
    DisplayContents(listStrings);
    listStrings.sort();
    cout << "after sort(): " << endl;
    DisplayContents(listStrings);

    listStrings.reverse();
    cout << "after reverse(): " << endl;
    DisplayContents(listStrings);

    return 0;
}
