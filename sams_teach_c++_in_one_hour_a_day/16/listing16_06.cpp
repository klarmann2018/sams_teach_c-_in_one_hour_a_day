/*
 * =====================================================================================
 *
 *       Filename:  listing16_06.cpp
 *
 *    Description:  Reversing a STL String Using std::reverse
 *
 *        Version:  1.0
 *        Created:  02/11/2020 08:06:04 AM
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

    string strSample("Hello String! We will reverse you!");
    cout << "The original sample string is: " << endl;
    cout << strSample << endl << endl;

    reverse(strSample.begin(), strSample.end());

    cout << "After applying the std::reverse algorithm: " << endl;
    cout << strSample << endl << endl;
    
    return 0;
}

