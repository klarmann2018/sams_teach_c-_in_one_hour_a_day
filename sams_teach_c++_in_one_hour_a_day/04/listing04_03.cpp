/*
 * =====================================================================================
 *
 *       Filename:  LISTing04_03.cpp
 *
 *    Description:  Accessing elements in a Multidimension Array
 *
 *        Version:  1.0
 *        Created:  2018年09月04日 09时30分51秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  bo lee
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <iostream>
using namespace std;
int main()
{
    int ThreeRowsThreeColumns[3][3]=\
    {{-501,206,2011},{989,101,206},{303,456,596}};

    cout <<  " Row 0: " << ThreeRowsThreeColumns[0][0] << " " \
        <<ThreeRowsThreeColumns[0][1]<< " " \
        <<ThreeRowsThreeColumns[0][2]<<endl;
    cout << " Row 1: " << ThreeRowsThreeColumns[1][0] << " " \
        <<ThreeRowsThreeColumns[1][1]<<" " \
        <<ThreeRowsThreeColumns[1][2]<<endl;
    cout << " Row 2: " << ThreeRowsThreeColumns[2][0]<< " " \
        <<ThreeRowsThreeColumns[2][1]<< " " \
        <<ThreeRowsThreeColumns[2][2]<< endl;

    return 0;
}

