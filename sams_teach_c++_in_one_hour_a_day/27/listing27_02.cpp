/*
 * =====================================================================================
 *
 *       Filename:  listing27_02.cpp
 *
 *    Description:  Using cout to Display Pi and a Circle's Area Using
 *    Fixed-Point and Scientific Notations
 *
 *        Version:  1.0
 *        Created:  03/17/2020 06:56:42 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  bo lee
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    const double Pi = (double)22.0 / 7;
    cout << "Pi = " << Pi << endl;

    cout << endl << "Setting precision to 7: " << endl;
    cout << setprecision(7);
    cout << "Pi = " << Pi << endl;
    cout << fixed << "Fixed Pi = " << Pi <<endl;
    cout << scientific << "Scientific Pi = " << Pi << endl;

    cout << endl << "Setting precision to 10: " << endl;
    cout << setprecision(10);
    cout << "Pi = " << Pi << endl;
    cout << fixed << "Fixed Pi = " << Pi << endl;
    cout << scientific << "Scientific Pi = " << Pi << endl;

    cout << endl << "Enter a radius: ";
    double Radius = 0.0;
    cin >> Radius;
    cout << "Area of circle: " << 2*Pi*Radius*Radius << endl;

    return 0;
}

