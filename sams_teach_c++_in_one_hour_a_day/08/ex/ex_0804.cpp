/*
 * =====================================================================================
 *
 *       Filename:  ex_0804.cpp
 *
 *    Description:  what's wrong with this code?
 *
 *        Version:  1.0
 *        Created:  2018年10月15日 12时43分48秒
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
    int* pNumber = new int;
    *pNumber = 9;
    cout << "The value at pNumber: " << *pNumber << endl;
    delete pNumber;
    return 0;
}

