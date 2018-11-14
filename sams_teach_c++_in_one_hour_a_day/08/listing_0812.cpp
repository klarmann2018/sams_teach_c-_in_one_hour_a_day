/*
 * =====================================================================================
 *
 *       Filename:  listing_0812.cpp
 *
 *    Description:  Accessing Elements in an Array Using the Dereference
 *    Operator(*) and Using the Array operator([]) with a Pointer
 *
 *        Version:  1.0
 *        Created:  2018年10月14日 08时02分10秒
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
    const int ARRAY_LEN = 5;

    // Static array of 5 integers, initialized
    int MyNumbers[ARRAY_LEN] = {24, -1, 365, -999, 2011};
    
    // Pointer initialized to first element in array
    int* pNumbers = MyNumbers;

    cout << "Displaying array using pointer synatax, operator*" << endl;
    for (int Index = 0; Index < ARRAY_LEN; ++Index)
    {
        cout << "Element " << Index << " = " << *(MyNumbers + Index) << endl;
    }

    cout << "Displaying array using with array syntax, operator[]" << endl;
    for (int Index = 0; Index < ARRAY_LEN; ++Index)
    {
        cout << "Element " << Index << " = " << pNumbers[Index] << endl;
    }

    return 0;
}

