/*
 * =====================================================================================
 *
 *       Filename:  listing22_05.cpp
 *
 *    Description:  Lambda Expression as a Binary Predicate in std::sort() to
 *    Enable Case-Insensitive Sort
 *
 *        Version:  1.0
 *        Created:  03/08/2020 07:59:43 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  bo lee
 *   Organization:  
 *
 * =====================================================================================
 */
#include <algorithm>
#include<string>
#include<vector>
#include<iostream>
using namespace std;

template<typename T>
void DisplayContents(const T& Input)
{
    for(auto iElement = Input.cbegin() // auto, cbegin and cend: C++11
            ; iElement != Input.cend()
            ; ++ iElement )
        cout << *iElement << endl;
}

int main()
{
    // Define a vector of string to hold names
    vector<string> vecNames;

    // Insert some sample names in to the vector
    vecNames.push_back("jim");
    vecNames.push_back("Jack");
    vecNames.push_back("Sam");
    vecNames.push_back("Anna");
    
    cout << "The names in vector in order of insertion: " << endl;
    DisplayContents(vecNames);

    cout << "Names after sorting using default std::less<>: " << endl;
    sort(vecNames.begin(), vecNames.end());
    DisplayContents(vecNames);

    cout << "Names after sorting using predicate that ignores case:" << endl;
    sort(vecNames.begin(), vecNames.end(),
            [](const string& str1, const string& str2) -> bool // lambda
            {
                string str1LowerCase;

                // Assign space
                str1LowerCase.resize(str1.size());
                int tolower(int);
                // Convert every character to the lower case
                transform(str1.begin(), str1.end(), str1LowerCase.begin(), tolower);
    
                string str2LowerCase;
                str2LowerCase.resize(str2.size());
                transform(str2.begin(), str2.end(), str2LowerCase.begin(), tolower);

                return (str1LowerCase < str2LowerCase);
            }  // end of lambda
            ); // end of sort
    DisplayContents(vecNames);

    return 0;
}

