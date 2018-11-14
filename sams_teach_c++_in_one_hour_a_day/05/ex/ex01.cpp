/*
 * =====================================================================================
 *
 *       Filename:  ex01.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2018年10月02日 18时17分45秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  bo lee
 *   Organization:  
 *
 * =====================================================================================
 */
#include<iostream>
using namespace std;

int main()
{
    cout << "input number: " ;
    int Number=0;
    cin >> Number ;

    int Result = (Number << 1) + 5 << 1; 
    cout << "result : " << Result<< endl;
    return 0;
}

