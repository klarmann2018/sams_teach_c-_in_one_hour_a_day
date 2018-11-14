/*
 * =====================================================================================
 *
 *       Filename:  listing07_04.cpp
 *
 *    Description:  Function That Computes the Area of a Circle, Using Pi as a
 *    Second Parameter with Default Value 3.14
 *
 *        Version:  1.0
 *        Created:  2018年10月09日 14时30分49秒
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

// Function Declaration (Prototype)
double Area(double InputRadius, double Pi = 3.14);  // Pi with default value

int main()
{
    cout << "Enter radius: ";
    double Radius = 0;
    cin >> Radius;

    cout << "Pi is 3.14, do you wish to change this (y / n)? ";
    char ChangePi = 'n';
    cin >> ChangePi;

    double CircleArea = 0;
    if (ChangePi == 'y')
    {
        cout << "Enter new Pi: ";
        double NewPi = 3.14;
        cin >> NewPi;
        CircleArea = Area (Radius, NewPi);
    }
    else
        CircleArea = Area(Radius);  //Ignore 2nd param, use default value

    // call function "Area"
    cout << "Area is: " << CircleArea << endl;

    return 0;
}


double Area(double InputRadius, double Pi )
{
    return Pi * InputRadius * InputRadius;
}

