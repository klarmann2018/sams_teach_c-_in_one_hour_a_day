/*
 * =====================================================================================
 *
 *       Filename:  listing07_09.cpp
 *
 *    Description:  Fetching the Area of a Circle as a Reference Parameter and
 *    Not as a Return Value
 *
 *        Version:  1.0
 *        Created:  2018年10月09日 17时52分53秒
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

const double PI = 3.1416;

// output parameter Result by reference
void Area(double Radius, double& Result)
{
    Result = PI * Radius * Radius;
}

int main()
{
    cout << "Enter radius: ";
    double InRadius = 0;
    cin >> InRadius;

    double AreaFetched = 0;
    Area(InRadius, AreaFetched);

    cout << "The area is: " << AreaFetched << endl;
    return 0;
}

