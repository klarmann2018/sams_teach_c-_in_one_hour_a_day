/*
 * =====================================================================================
 *
 *       Filename:  listing07_07.cpp
 *
 *    Description:  Using an Overloaded Function to Calculate the Area of a
 *    Circle or a Cylinder
 *
 *        Version:  1.0
 *        Created:  2018年10月09日 16时58分48秒
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

double Area(double Radius); // for circle
double Area(double Radius, double Height);  //overloaded for cylinder

int main()
{
    cout << "Enter z for Cylinder, c for Circle: ";
    char Choice = 'z';
    cin >> Choice;

    cout << "Enter radius: ";
    double InRadius = 0;
    cin >> InRadius;

    if (Choice == 'z')
    {
        cout << "Enter height: ";
        double InHeight = 0;
        cin >> InHeight;

        // Invoke overloaded variant of Area for Cylinder
        cout << "Area of Cylinder is: " << Area (InRadius, InHeight) << endl;
    }
    else 
    {
        cout << "Area of Circle is: " << Area (InRadius) << endl;
    }
    return 0;
}

double Area(double Radius)
{
    return Pi * Radius * Radius;
}

double Area(double Radius, double Height)
{
    //return 2 * Pi * Radius * Radius + 2 * Pi * Radius * Height;
    return 2 * Area (Radius) + 2 * Pi * Radius * Height;
}
