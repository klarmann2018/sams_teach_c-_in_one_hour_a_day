
/*
 * =====================================================================================
 *
 *       Filename:  listing10_09.cpp
 *
 *    Description:  class SuperCar That Derives from class Car That Derives from class Motor Using protected Inheritance
 *
 *        Version:  1.0
 *        Created:  05/11/18 16:13:23  
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author: bo lee
 *   Organization:
 *
 * =====================================================================================
 */
#include <iostream>
using namespace std;

class Motor
{
    public:
        void SwitchIgnition()
        {
            cout << "Ignition ON" << endl;
        }
        void PumpFuel()
        {
            cout << "Fuel in cylinders" << endl;
        }
        void FireCylinder()
        {
            cout << "Vroooom" << endl;
        }
};

class Car:protected Motor
{
    public:
        void Move()
        {
            SwitchIgnition();
            PumpFuel();
            FireCylinder();
        }
};

class SuperCar:protected Car
{
    public:
        void Move()
        {
            SwitchIgnition();   // has access to base members
            PumpFuel(); // due to "protected" inheritance between Car and Motor
            FireCylinder();
            FireCylinder();
            FireCylinder();
        }
};

int main()
{
    SuperCar myDreamCar;
    myDreamCar.Move();

    return 0;
}
