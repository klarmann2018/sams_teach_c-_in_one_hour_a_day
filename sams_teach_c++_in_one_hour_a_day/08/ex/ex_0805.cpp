/*
 * =====================================================================================
 *
 *       Filename:  ex_0805.cpp
 *
 *    Description:  What is wrong with this code?
 *
 *        Version:  1.0
 *        Created:  2018年10月15日 12时49分49秒
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
    int* pNumberCopy = pNumber;
    *pNumberCopy = 30;
    cout << *pNumber << endl;
    delete pNumberCopy;
    delete pNumber;
    // There is a double delete on the same memory address returned by new to
    // pNumber and duplicated in pNumberCopy. Remove one.
    
    return 0;
}

