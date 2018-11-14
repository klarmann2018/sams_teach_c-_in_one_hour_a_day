/*
 * =====================================================================================
 *
 *       Filename:  listing_0809.cpp
 *
 *    Description:  Allocate Dynamically Based on Need, Examine Incrementing
 *    Pointers with Offset and Operator ++
 *
 *        Version:  1.0
 *        Created:  2018年10月13日 20时12分19秒
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
    cout << "How many integers you wish to enter? ";
    int InputNums = 0;
    cin >> InputNums;

    int* pNumbers = new int [InputNums];    // allocate requested integers
    int* pCopy = pNumbers;
    
    cout << "successfully allocated memory for " << InputNums << " integers" << endl;
    for(int Index = 0; Index < InputNums; ++Index)
    {
        cout << "Enter number " << Index << ": ";
        cin >> *(pNumbers + Index);
    }

    cout << "Displaying all numbers input: " << endl;
    for(int Index = 0; Index < InputNums; ++Index)
    {
        cout << *(pCopy++) << " ";
    }

    cout << endl;

    // done with using the pointer? release memory
    delete[] pNumbers;

    return 0;
}

