/*
 * =====================================================================================
 *
 *       Filename:  ex_03.cpp
 *
 *    Description:  BUG BUSTERS: What is wrong with the following code?
 *
 *        Version:  1.0
 *        Created:  2018年10月10日 20时36分28秒
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

const double Pi = 3.1416;

void Area(double Radius, double Result)
{
    Result = Pi * Radius * Radius;
}

int main()
{
    cout << "Enter radius: ";
    double Radius = 0;
    cin >> Radius;

    double AreaFetched = 0;
    Area(Radius, AreaFetched);

    cout << "The area is: " << AreaFetched << endl;
    return 0;
}
