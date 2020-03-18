/*
 * =====================================================================================
 *
 *       Filename:  listing20_05.cpp
 *
 *    Description:  Supplying a Custom Sort Predicate --- A Telephone Directory
 *
 *        Version:  1.0
 *        Created:  02/29/2020 04:52:10 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  bo lee
 *   Organization:  
 *
 * =====================================================================================
 */
#include<map>
#include<algorithm>
#include<string>
#include<iostream>

using namespace std;

struct PredIgnoreCase
{
    bool operator() (const string& str1, const string& str2) const
    {
        string str1NoCase(str1), str2NoCase(str2);
        //   TODO: compile failure
        //2020-03-08 09:12:34  解决 gcc 可能有 一个以上的重载 声明一下 tolower
        int tolower(int);
        std::transform(str1.begin(), 
                  str1.end(), 
                  str1NoCase.begin(), 
                  tolower);
        transform(str2.begin(), str2.end(), str2NoCase.begin(), tolower);

        return(str1NoCase < str2NoCase);
    };
};

template<typename T>
void DisplayContents(const T& Input)
{
    for(auto iElement = Input.cbegin() // auto and cbegin(): C++11
            ; iElement != Input.cend() // cend() is new in C++11
            ; ++ iElement)
        cout << iElement -> first << " -> " << iElement -> second << endl;

    cout << endl;
};


typedef map<string, string> DIRECTORY_WITHCASE;
typedef map<string, string, PredIgnoreCase> DIRECTORY_NOCASE;

int main()
{
    // Case-insensitive directory: case of string-key plays no role
    DIRECTORY_NOCASE dirCaseInsensitive;

    dirCaseInsensitive.insert(make_pair("John", "2345764"));
    dirCaseInsensitive.insert(make_pair("JOHN", "2345764"));
    dirCaseInsensitive.insert(make_pair("Sara", "42367236"));
    dirCaseInsensitive.insert(make_pair("Jack", "32435348"));

    cout << "Displaying contents of the case-insensitive map: " << endl;
    DisplayContents(dirCaseInsensitive);

    // Case-sensitive map: case of string-key affects insertion & search
    DIRECTORY_WITHCASE dirCaseSensitive(dirCaseInsensitive.cbegin(), dirCaseInsensitive.cend());
 
    cout << "Displaying contents of the case-sensitive map: " << endl;
    DisplayContents(dirCaseSensitive);
    
    // Search for a name in the two maps and display result
    cout << "Please enter a name to search: "  << endl << "> ";
    string strNameInput;
    cin >> strNameInput;

    // find in the map...
    auto iPairInNoCaseDir = dirCaseInsensitive.find(strNameInput);
    if(iPairInNoCaseDir != dirCaseInsensitive.cend())
    {
        cout << iPairInNoCaseDir -> first << "'s number in the case-insensitive";
        cout << " directory is: " << iPairInNoCaseDir -> second << endl;
    }
    else
    {
        cout << strNameInput << "'s number not found ";
        cout << "in the case-insensitive directory" << endl;
    }

    // find in the case-sensitive map ...
    auto iPairInCaseSensDir = dirCaseSensitive.find(strNameInput);
    if(iPairInCaseSensDir != dirCaseSensitive.end())
    {
        cout << iPairInCaseSensDir -> first << "'s number in the case-sensitive";
        cout << " directory is: " << iPairInCaseSensDir -> second << endl;
    }
    else
    {
        cout << strNameInput << "'s number was not found ";
        cout << "in the case-sensitive directory" << endl;
    }

    return 0;
}




