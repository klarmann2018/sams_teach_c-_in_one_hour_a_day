/*
 * =====================================================================================
 *
 *       Filename:  listing16_07.cpp
 *
 *    Description:  Converting an STL String Using std::transform to Uppercase
 *
 *        Version:  1.0
 *        Created:  02/11/2020 08:30:43 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  bo lee
 *   Organization:  
 *
 * =====================================================================================
 */
#include<string>
#include<iostream>

#include<algorithm>

int main()
{
    using namespace std;

    cout << "Please enter a string for case-convertion:" << endl;
    cout << "> ";

    string strInput;
    getline(cin, strInput);
    cout << endl;

    transform(strInput.begin(),strInput.end(),strInput.begin(),::toupper);
    cout << "The string converted to upper case is: " << endl;
    cout << strInput << endl << endl;

    transform(strInput.begin(),strInput.end(),strInput.begin(),::tolower);
    cout << "The string converted to lower case is: " << endl;
    cout << strInput << endl << endl;

    return 0;
}

