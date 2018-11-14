/*
 * =====================================================================================
 *
 *       Filename:  listing07_01.cpp
 *
 *    Description:  Two Functions That Compute the Area and Circumference of a
 *    Circle Given Radius
 *
 *        Version:  1.0
 *        Created:  2018年10月08日 20时18分06秒
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

// Function declarations (Prototypes)
double Area(double InputRadius);
double Circumference(double InputRadius);

int main()
{

    cout << "Enter radius: ";
    double Radius = 0;
    cin >> Radius;

    // Call function "Area"
    cout << "Area is: " << Area(Radius) << endl;

    // Call function "Circumference"
    cout << "Circumference is: " << Circumference(Radius) << endl;

    return 0;
}

// Function definitions (implementations)
double Area(double inputR)
{
    return Pi * inputR * inputR;
}

double Circumference(double inputRadiu)
{
    return 2 * Pi * inputRadiu;
}
