/*
 * =====================================================================================
 *
 *       Filename:  listing10_1.cpp
 *
 *    Description:  Fish, carp, tuna, inherit
 *
 *        Version:  1.0
 *        Created:  2017年03月04日 17时29分23秒
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

class Fish 
{
    public:
        bool freshWaterFish;

        void swim() 
        {
            if (freshWaterFish) {
                cout << "Swim in lake" << endl;

            } else{

                cout << "Swim in See" << endl;
            }

        }
};

class Carp: private Fish 
{
    public:
        Carp() 
        {
            freshWaterFish = true;
        }

};

class Tuna: public Fish 
{
    public:
        Tuna() 
        {
            freshWaterFish = false;

        }
};

int main() 
{
    Carp myLunch;
    Tuna myDinner;

    cout << "Getting my food to swim"<< endl;

    cout << "My Lunch:";
    myLunch.swim();
    cout << endl;

    cout << "My Dinner";
    myDinner.swim();
    cout<<endl;

    return 0;  
}
