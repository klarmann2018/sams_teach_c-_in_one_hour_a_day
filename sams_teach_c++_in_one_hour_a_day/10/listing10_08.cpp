/*
 * =====================================================================================
 *
 *       Filename:  listing10_08.cpp
 *
 *    Description:  A class Car Related to class Motor via private Inheritance
 *
 *        Version:  1.0
 *        Created:  10/25/2018 08:59:51 AM
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

        void FireCylinders()
        {
            cout << "Vroooom" << endl;
        }
};

class Car: private Motor
{
    public:
        void move()
        {
            SwitchIgnition();
            PumpFuel();
            FireCylinders();
        }
};

int main()
{
    Car myDreamCar;
    myDreamCar.move();

    return 0;
}
