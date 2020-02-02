/*
 * =====================================================================================
 *
 *       Filename:  listing14_02.cpp
 *
 *    Description:  Using Macro Functions That Calculate the Square of a Number,
 *    Area of a Circle, and Min and Max of Two Numbers
 *
 *        Version:  1.0
 *        Created:  01/28/2020 07:10:37 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  bo lee
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include<iostream>
#include<string>

using namespace std;

#define SQUARE(x) ((x)*(x))
#define PI 3.1416
#define AREA_CIRCLE(r) (PI*(r)*(r))
#define MAX(a,b) (((a)>(b))?(a):(b))
#define MIN(a,b) (((a)<(b))?(a):(b))

int main()
{
    cout << "Enter an integer: ";
    int Input1 =0;
    cin >> Input1;

    cout << "SQUARE(" << Input1 << ") = " << SQUARE(Input1) << endl;
    cout << "Area of a circle with radius " << Input1 << " is: " ;
    cout << AREA_CIRCLE(Input1) << endl;

    cout << "Enter another integer: ";
    int Input2 =0;
    cin >> Input2;

    cout << "MIN( " << Input1 << ", " << Input2 << ") = " ;
    cout << MIN(Input1, Input2) << endl;

    cout << "MAX( " << Input1 << ", " << Input2 << ") = " ;
    cout << MAX(Input1,Input2) << endl;
    return 0;
}
