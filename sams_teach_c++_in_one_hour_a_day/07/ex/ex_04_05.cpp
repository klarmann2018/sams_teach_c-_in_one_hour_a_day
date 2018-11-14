/*
 * =====================================================================================
 *
 *       Filename:  ex_04_05.cpp
 *
 *    Description:  1. BUG BUSTERS: What is wrong with the following function
 *    declaration? double Area(double Pi = 3.14, double Radius);
 *    ===> double Area(double radius, double Pi = 3.14)
 *
 *    2. Write a function with return type void that still helps the caller
 *       calculate the area and circumference of a circle when supplied the
 *       radius.
 *
 *        Version:  1.0
 *        Created:  2018年10月10日 21时25分02秒
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

void CalAreaAndCircum(double& Area, double& Circumference, double InRadius);

int main()
{
    cout << "Enter the Radius:";
    double InRadius = 0;
    cin >> InRadius;

    double Area = 0, Circumference = 0;
    CalAreaAndCircum(Area, Circumference,InRadius);

    cout << "Area: " << Area << " Circumference: " << Circumference << endl;
    return 0;
}

void CalAreaAndCircum(double& Area, double& Circumference, double InRadius)
{
    Area = PI * InRadius * InRadius;
    Circumference = 2 * PI * InRadius;
}

