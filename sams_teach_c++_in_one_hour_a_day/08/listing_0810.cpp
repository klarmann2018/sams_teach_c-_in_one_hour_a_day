/*
 * =====================================================================================
 *
 *       Filename:  listing_0810.cpp
 *
 *    Description:  Use const Keyword in Calculating the Area of a Circle When
 *    Radius and Pi are Supplied as Pointers
 *
 *        Version:  1.0
 *        Created:  2018年10月13日 21时02分18秒
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

void CalcArea(const double* const pPi, // const pointer to const data
              const double* const pRadius, // i.e. nothing can be changed
              double* const pArea) // change pointed Value, not address
{
    // check pointers before using!
    if (pPi && pRadius && pArea)
        *pArea = (*pPi) * (*pRadius) * (*pRadius);
}
int main()
{

    const double Pi = 3.1416;

    cout << "Enter radius of circle: ";
    double Radius = 0;
    cin >> Radius;

    double Area = 0;
    CalcArea(&Pi, &Radius, &Area);

    cout << "Area is = " << Area << endl;

    return 0;
}

