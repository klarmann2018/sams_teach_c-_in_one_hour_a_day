/*
 * =====================================================================================
 *
 *       Filename:  listing_0506.cpp
 *
 *    Description:  Using Logical NOT(!) and Logical AND (&&) Operator in if
 *    Statements for Conditional Processing
 *
 *        Version:  1.0
 *        Created:  2018年10月01日 22时29分50秒
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
    cout << "Use boolean values(0 / 1) to answer the questions" << endl;
    cout << "Is it raining? ";
    bool Raining = false;
    cin >> Raining;

    cout << "Do you have buses on the streets? ";
    bool Buses = false;
    cin >> Buses;

    // Conditional statement uses logical AND and NOT
    if(Raining && !Buses)
        cout << "You cannot go to work" << endl;
    else 
        cout << "You can go to work" << endl;

    if(Raining && Buses)
        cout << "Take an umbrella" << endl;

    if((!Raining) && Buses)
        cout << "Enjoy the sun and have a nice day" << endl;

    return 0;
}

