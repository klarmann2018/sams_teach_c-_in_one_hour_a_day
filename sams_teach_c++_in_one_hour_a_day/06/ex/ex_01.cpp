/*
 * =====================================================================================
 *
 *       Filename:  ex_01.cpp
 *
 *    Description: Write a For Loop to Access Elements in an Array in the
 *    Reverse Order 
 *
 *        Version:  1.0
 *        Created:  2018年10月08日 14时57分26秒
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
    const int ARRAY_LENGTH = 5;
    int IntsArray[ARRAY_LENGTH] = {1, 2, 3, 4, 5 };

    cout << "the original array: ";
    for(int index = 0; index < ARRAY_LENGTH; ++index)
    {
        cout << IntsArray[index] << " " ;
    }
    cout << endl;
    
    cout << "the reverse order output :" ;
    for (int index = 0; index < ARRAY_LENGTH ; ++index)
    {
        cout << IntsArray[ARRAY_LENGTH - index - 1] << " " ;
    }
    cout << endl;

    cout << "GoodBye!" << endl;
    
    return 0;
}

