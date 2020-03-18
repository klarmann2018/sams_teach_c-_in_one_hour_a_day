/*
 * =====================================================================================
 *
 *       Filename:  listing21_06.cpp
 *
 *    Description:  A Binary Predicate for Case-Insensitive String Sort
 *
 *        Version:  1.0
 *        Created:  03/08/2020 02:28:54 PM
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
using namespace std;

class CompareStringNoCase
{
    public:
        bool operator()(const string& str1, const string& str2) const
        {
            string str1LowerCase;

            // Assign space
            str1LowerCase.resize(str1.size());

            int tolower(int);
            // Convert every character to the lower case
            transform(str1.begin(),
                    str1.end(),
                    str1LowerCase.begin(),
                    tolower);

            string str2LowerCase;
            str2LowerCase.resize(str2.size());
            transform(str2.begin(),
                    str2.end(),
                    str2LowerCase.begin(),
                    tolower);

            return (str1LowerCase < str2LowerCase);
        }
};

