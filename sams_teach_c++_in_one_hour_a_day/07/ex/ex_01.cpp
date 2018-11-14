/*
 * =====================================================================================
 *
 *       Filename:  ex_01.cpp
 *
 *    Description:  Write Overloaded Functions that Calculate the Volume of a
 *    Sphere and a Cylinder.
 *                  The Formulas are the following:
 *                  Volume of Sphere = (4 * Pi * Radius * Radius * Radius) / 3
 *                  Volume of Cylinder = Pi * Radius * Radius * Height
 *
 *        Version:  1.0
 *        Created:  2018年10月10日 17时27分51秒
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

const double PI = 3.14159;

double CalVolum(double InRadius); // sphere
double CalVolum(double InRadius, double Height); // cylinder

int main()
{
    cout << "Enter Radius:" ;
    double InRadius = 0;
    cin >> InRadius;

    cout << "the volume of Sphere: " << CalVolum(InRadius) << endl;
    
    cout << "Enter Radius and Height:";
    cin >> InRadius;
    double InHeight = 0;
    cin >> InHeight;

    cout << "the volume of Cylinder: " << CalVolum(InRadius,InHeight);
    cout << endl;

    return 0;
}


double CalVolum(double InRadius)
{
    return (4 * PI * InRadius * InRadius * InRadius)/3;
}
double CalVolum(double InRadius, double Height)
{
    return PI * InRadius * InRadius * Height;
}
