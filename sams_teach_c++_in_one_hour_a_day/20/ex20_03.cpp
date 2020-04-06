/*
 * =====================================================================================
 *
 *       Filename:  ex20_03.cpp
 *
 *    Description:  Demonstrate via a simple program that a map cannot accept duplicate entries
   whereas a multimap can.
 *
 *        Version:  1.0
 *        Created:  2020年03月28日 08时39分27秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  bo lee
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>
#include <map>
#include<string>

using namespace std;

template<typename T1, typename T2>
void Displaying(map<T1,T2>& input)
{
    for(auto iElement = input.cbegin();iElement!= input.cend(); ++iElement)
    {
        cout << "Key: "<<iElement->first <<"  value: " << iElement ->second << endl;
    }
    
};

template<typename T1, typename T2>
void Displaying(multimap<T1,T2>& input)
{
    for(auto iElement = input.cbegin();iElement!= input.cend(); ++iElement)
    {
        cout << "Key: "<<iElement->first <<"  value: " << iElement ->second << endl;
    }
    
};
int main()
{
    map<string,int> mStringToInt;
    mStringToInt.insert(make_pair("bo",1));
    mStringToInt.insert(make_pair("lee",2));
    mStringToInt.insert(make_pair("lee",2));
    cout << "Map:" << endl;
    Displaying(mStringToInt);

    multimap<string, int> mmStringToInt;
    mmStringToInt.insert(make_pair("bo",1));
    mmStringToInt.insert(make_pair("lee",2));
    mmStringToInt.insert(make_pair("lee",2));
    cout << "Multmap: " << endl;
    Displaying(mmStringToInt);
    return 0;
}

