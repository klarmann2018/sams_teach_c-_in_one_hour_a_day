/*
 * =====================================================================================
 *
 *       Filename:  ex18_02.cpp
 *
 *    Description:  Using a short program, domostrate that an iterator pointing to an element in
   a list continues to remain valid even after another element has been inserted
   before it, thus changing the relative position of the former element.
 *
 *        Version:  1.0
 *        Created:  2020年03月23日 19时55分55秒
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
using namespace std;

template<typename T>
void DisplayContents(T& input)
{
    for(auto iElement = input.cbegin()
            ; iElement != input.cend()
            ; ++ iElement)
        cout << *iElement << " " ;
    cout << endl;
}
int main()
{

    list<int> listIntegers;
    listIntegers.push_back(777);
    listIntegers.push_back(888);

    listIntegers.push_front(111);

    DisplayContents(listIntegers);

    return 0;
}

