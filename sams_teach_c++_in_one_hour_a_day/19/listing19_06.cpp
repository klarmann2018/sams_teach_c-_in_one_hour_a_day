/*
 * =====================================================================================
 *
 *       Filename:  listing19_06.cpp
 *
 *    Description:  std::unordered_set and the Use of insert(), find(), size(),
 *    max_bucket_count(), load_factor(), and max_load_factor()
 *
 *        Version:  1.0
 *        Created:  02/26/2020 06:44:53 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  bo lee
 *   Organization:  
 *
 * =====================================================================================
 */
#include <unordered_set>
#include <iostream>
using namespace std;

template<typename T>
void DisplayContents(const T& Input)
{
    cout << "Number of elements, size() = " << Input.size() << endl;
    cout << "Max bucket count = " << Input.max_bucket_count() << endl;
    cout << "Load factor: " << Input.load_factor() << endl;
    cout << "Max load factor = " << Input.max_load_factor() << endl;
    cout << "Unordered set contains: " << endl;

    for(auto iElement = Input.cbegin() // auto, cbegin: C++11
            ; iElement != Input.cend()
            ; ++ iElement)
        cout << *iElement << ' ';

    cout << endl;
}

int main()
{
    // instantiate unordered_set of int to string:
    unordered_set<int> usetInt;

    usetInt.insert(1000);
    usetInt.insert(-3);
    usetInt.insert(2011);
    usetInt.insert(300);
    usetInt.insert(-1000);
    usetInt.insert(989);
    usetInt.insert(-300);
    usetInt.insert(111);
    DisplayContents(usetInt);

    usetInt.insert(999);
    DisplayContents(usetInt);

    // find():
    cout << "Enter int you want to check for existence in set: ";
    int key = 0;
    cin >> key;
    auto iPairThousand = usetInt.find(key);

    if(iPairThousand != usetInt.cend())
        cout << *iPairThousand << " found in set" << endl;
    else 
        cout << key << " not available in set" << endl;
    
    return 0;
}
