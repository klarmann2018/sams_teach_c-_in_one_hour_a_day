/*
 * =====================================================================================
 *
 *       Filename:  listing07_06.cpp
 *
 *    Description:  Using Multiple Return Statements in One Function
 *
 *        Version:  1.0
 *        Created:  2018年10月09日 15时18分40秒
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
const double Pi = 3.14159;

void QueryAndCalculate()
{
    cout << "Enter radius: ";
    double InRadius = 0;
    cin >> InRadius;

    cout << "Area: " <<  Pi * InRadius * InRadius << endl;

    cout << "Do you wish to calculate circumference (y / n)? ";
    char CalcCircum = 'n';
    cin >> CalcCircum;

    if (CalcCircum == 'n')
        return;

    cout << "Circumference: " << 2 * Pi * InRadius << endl;
    return;
}

int main()
{
    QueryAndCalculate();
    return 0;
}


