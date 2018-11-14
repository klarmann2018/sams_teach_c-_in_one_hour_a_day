/*
 * =====================================================================================
 *
 *       Filename:  ex_02.cpp
 *
 *    Description:  Write a Function that Accepts an Array of Double as Input.
 *
 *        Version:  1.0
 *        Created:  2018年10月10日 17时54分54秒
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

void AcceptDoubleArrayInput(double DoublesArray[], int Length);

int main()
{
    double InputDoubleArray[5] =  {24, 34.22, -12.45, 0, 13.14};
    
    AcceptDoubleArrayInput(InputDoubleArray, 5);

    return 0;
}
void AcceptDoubleArrayInput(double DoublesArray[], int Length)
{
    for(int Index = 0; Index < Length; ++ Index)
    {
        cout << "DoublesArray[" << Index << "]:" << DoublesArray[Index] <<endl;
    }
}
