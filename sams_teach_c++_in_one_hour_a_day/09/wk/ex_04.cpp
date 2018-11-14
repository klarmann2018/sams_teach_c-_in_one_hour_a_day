/*
 * =====================================================================================
 *
 *       Filename:  ex_04.cpp
 *
 *    Description:  Write a class Circle that computes the area and
 *    circurmference given a radius that is supplied to the class as a parameter
 *    at the time of instantiation. Pi should be contained in a constant private
 *    member that cannot be accessed from outside the circle.
 *
 *        Version:  1.0
 *        Created:  2018年10月21日 21时38分37秒
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

class Circle
{
    private:
        double Radius;
        const double Pi = 3.14159;

    public:
        Circle(double InputRadius)
        {
            Radius = InputRadius;
        }

        void Calculate()
        {
            double Area = 0;
            double Circurmference = 0;

            Area = Pi * Radius  * Radius;
            Circurmference = 2 * Pi * Radius;

            cout << "Area : " << Area << endl;
            cout << "Circurmference: " << Circurmference <<endl;
        }
};

int main()
{
    cout << "Enter radius: " ;
    double InputRadius = 0;
    cin >> InputRadius;

   Circle MyCircle(InputRadius);
   MyCircle.Calculate();

    return 0;
}

