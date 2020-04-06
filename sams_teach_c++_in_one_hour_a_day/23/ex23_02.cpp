/*
 * =====================================================================================
 *
 *       Filename:  ex23_02.cpp
 *
 *    Description:  Demonstrate how STL algorithms such as copy use iterators to
 *    do their functions without needing to know the nature of the destination
 *    collections by copying between two sequences held in two dissimilar
 *    containers.
 *
 *        Version:  1.0
 *        Created:  2020年03月31日 21时12分17秒
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
#include<list>

using namespace std;
template<typename T>
void DisplayContents(const T& input)
{
    for(auto iElement = input.cbegin(); iElement != input.cend(); ++ iElement)
        cout << *iElement << ' ' ;
    
    cout <<"| size:" << input.size() << endl;
}

int main()
{
    vector<int> vecIntegers;
    for(size_t n = 0; n < 10; ++ n)
        vecIntegers.push_back(n);

    cout << "vecIntegers:" << endl;
    DisplayContents(vecIntegers);

    list<int> listIntegers;
    listIntegers.resize(vecIntegers.size());

    copy(vecIntegers.begin(),vecIntegers.end(), listIntegers.begin());

    cout << "list integers: " << endl;
    DisplayContents(listIntegers);

    listIntegers.clear();
    cout << "list after clear: " << endl;
    DisplayContents(listIntegers);

    auto iElement = vecIntegers.begin();

    while(iElement!=vecIntegers.end())
    {
        listIntegers.push_back(*iElement);
        ++ iElement;
    }

    cout << "use iterator replace copy function:" << endl;
    DisplayContents(listIntegers);

    return 0;
}
