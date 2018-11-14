/*
 * =====================================================================================
 *
 *       Filename:  ex_03.cpp
 *
 *    Description:  Write a Program that displays Fibonacci Numbers similar to
 *    Listing 6.15 but Asks the User How Many Numbers She wants to Compute.
 *
 *        Version:  1.0
 *        Created:  2018年10月08日 18时20分06秒
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

    cout << "This program will displays fibonacci numbers!" << endl;


    char WantMore = '\0';
    int WantNumber = 0;

    do
    {
        cout << "How many numbers do you want to compute?" << endl;
        cin >> WantNumber ;

        int Num1 = 0, Num2 = 1;

        for(int Index = 0; Index < WantNumber ; ++ Index)
        {

            if(Index == 0)
                cout << Num1 << endl;
            else if(Index == 1)
                cout << Num2 << endl;
            else
            {
                cout << Num1 + Num2 << endl;
                int Num2Temp = Num2;
                Num2 = Num1 + Num2;
                Num1 = Num2Temp;
            }

        }

        cout << endl << "Do you want more numbers (y/n)? ";
        cin >> WantMore;

    }while (WantMore == 'y');

    cout << "Goodbye!" << endl;

    return 0;
}

