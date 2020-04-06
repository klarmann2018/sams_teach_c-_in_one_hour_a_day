/*
 * =====================================================================================
 *
 *       Filename:  ex24_02.cpp
 *
 *    Description:  Write a program that reverses the user's string input using the stack class.
 *
 *        Version:  1.0
 *        Created:  2020年04月01日 20时23分16秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  bo lee
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>
#include<stack>
using namespace std;

int main()
{
    stack<char> stackChars;
    cout << "please input string for test: " << endl;
    string inputStr;
    cin >> inputStr;
    for(auto iElement=inputStr.begin(); iElement!= inputStr.end(); ++ iElement)
    {   
        stackChars.push(*iElement);
    }

    cout << "Stack contains:" << stackChars.size() << " elements" << endl;
    cout << "reverse user's string:" << endl;

    while(stackChars.size()!=0)
    {
        cout << stackChars.top();
        stackChars.pop();
    }
    cout << endl;
    return 0;
}

