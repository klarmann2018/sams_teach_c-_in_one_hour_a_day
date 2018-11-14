/*
 * =====================================================================================
 *
 *       Filename:  listing07_05.cpp
 *
 *    Description:  Using Recursive Functions to Calculate a Number in the
 *    Fibonacci Series
 *
 *        Version:  1.0
 *        Created:  2018年10月09日 15时06分44秒
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

int GetFibNumber(int FibIndex)
{
    if (FibIndex < 2)
        return FibIndex;
    else    //recursion if FibIndex >= 2
        return GetFibNumber(FibIndex - 1) + GetFibNumber(FibIndex - 2);
}

int main()
{
    cout << "Enter 0-based index of desired Fibonacci Number: ";
    int Index = 0;
    cin >> Index;

    cout << "Fibonacci number is: " << GetFibNumber(Index);
    return 0;
}

