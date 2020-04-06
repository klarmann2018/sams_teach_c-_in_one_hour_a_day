/*
 * =====================================================================================
 *
 *       Filename:  ex22_01.cpp
 *
 *    Description:  Write a lambda binary predicate that would help sort in descending order.
 *
 *        Version:  1.0
 *        Created:  2020年03月29日 10时11分35秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  bo lee
 *   Organization:  
 *
 * =====================================================================================
 */
#include<algorithm>
#include <iostream>
#include<vector>

using namespace std;

template<typename T>
struct PredicateBinary
{
    bool operator()(const T& t1, const T& t2) const
    {
        return (t1 > t2);
    }

};
template<typename T>
void DisplayContent(const T& input)
{
    for(auto iElement=input.cbegin()
            ; iElement!=input.cend()
            ; ++ iElement)
        cout << *iElement << " ";
    cout << endl;
}
int main()
{
    vector<int> vecIntegers1;
    for(size_t n = 0; n < 10; ++ n)
        vecIntegers1.push_back(n);
    cout << "vecIntegers1:" << endl;
    DisplayContent(vecIntegers1);

    sort(vecIntegers1.begin(), vecIntegers1.end());
    cout << "sort use default predicate:" << endl;
    DisplayContent(vecIntegers1);

    sort(vecIntegers1.begin(), vecIntegers1.end(), PredicateBinary<int>());
    cout << "sort use descending predicate: " << endl;
    DisplayContent(vecIntegers1);

    cout << "next use lambda :"<<endl;
    sort(vecIntegers1.begin(), vecIntegers1.end()); // 恢复开始顺序
    cout << "恢复开始顺序："<<endl;
    DisplayContent(vecIntegers1);
    sort(vecIntegers1.begin(), vecIntegers1.end(), [](int& t1, int& t2 ){return(t1>t2);});
    cout << "after lambda: " << endl;
    DisplayContent(vecIntegers1);
        
    return 0;
}
