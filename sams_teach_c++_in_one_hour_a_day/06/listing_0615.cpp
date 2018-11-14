/*
 * =====================================================================================
 *
 *       Filename:  listing_0615.cpp
 *
 *    Description:  Using Nested Loops to Calculate a Fibonacci Series
 *
 *        Version:  1.0
 *        Created:  2018年10月07日 23时10分57秒
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
    const int NumsToCal = 5;
    cout << "This program will calculate " << NumsToCal \
        << " Fibonacci Numbers at a time" << endl;

    int Num1 = 0, Num2 = 1;
    char WantMore = '\0';
    cout << Num1 << " " << Num2 << endl;

    do
    {
        for(int Index = 0; Index < NumsToCal; ++Index)
        {
            cout << Num1 + Num2 << endl;
            int Num2Temp = Num2;
            Num2 = Num1 + Num2;
            Num1 = Num2Temp;
        }

        cout << endl << "Do you want more numbers (y/n)? ";
        cin >> WantMore;

    }while (WantMore == 'y');

    cout << "Goodbye!" << endl;

    return 0;
}

