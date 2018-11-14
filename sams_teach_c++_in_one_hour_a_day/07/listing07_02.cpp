/*
 * =====================================================================================
 *
 *       Filename:  listing07_02.cpp
 *
 *    Description:  Function That Accepts Two Parameters to Compute the Surface
 *    Area of a Cylinder
 *
 *        Version:  1.0
 *        Created:  2018年10月09日 13时17分58秒
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

// Declaration contains two parameters
double SurfaceArea(double radius, double height);

int main()
{
    cout << "Enter the radius of the cylinder: ";
    double InRadius = 0;
    cin >> InRadius;
    cout << "Enter the height of the cylinder: ";
    double InHeight = 0;
    cin >> InHeight;

    cout << "Surface Area: " << SurfaceArea(InRadius, InHeight) << endl;
    return 0;
}

double SurfaceArea(double radius, double height)
{
    double SurfaceArea = 2 * Pi * radius * radius + 2 * Pi * radius *height;
    return SurfaceArea;
}
