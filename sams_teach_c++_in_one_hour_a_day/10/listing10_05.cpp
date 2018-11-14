/*
 * =====================================================================================
 *
 *       Filename:  listing10_05.cpp
 *
 *    Description:  Using Scope Resolution Operator (::) to Invoke Base Class
 *    Methods from Derived Class Methods and main()
 *
 *        Version:  1.0
 *        Created:  2018年10月24日 08时47分58秒
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

class Fish
{
    private:
        bool FreshWaterFish;

    public:
        // Fish constructor
        Fish(bool IsFreshWater): FreshWaterFish(IsFreshWater){}

        void Swim()
        {
            if (FreshWaterFish)
                cout << "Swims in lake" << endl;
            else
                cout << "Swims in sea" << endl;
        }
};

class Tuna: public Fish
{
    public:
        Tuna(): Fish(false) {}

        void Swim()
        {
            cout << "Tuna swims real fast" << endl;
        }
};

class Carp: public Fish
{
    public:
        Carp(): Fish(true) {}

        void Swim()
        {
            cout << "Carp swims real slow" << endl;
            Fish::Swim();
        }
};

int main()
{
    Carp myLunch;
    Tuna myDinner;

    cout << "Getting my food to swim" << endl;

    cout << "Lunch: ";
    myLunch.Swim();

    cout << "Dinner: ";
    myDinner.Fish::Swim();

    return 0;
}
