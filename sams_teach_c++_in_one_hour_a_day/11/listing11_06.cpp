/*
 * =====================================================================================
 *
 *       Filename:  listing11_06.cpp
 *
 *    Description:  class Fish as an Abstract Base Class for Tuna and Carp
 *
 *        Version:  1.0
 *        Created:  11/15/2018 11:56:17 PM
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
    public:
        // define a pure virtual function Swim
        virtual void Swim() = 0;
};

class Tuna:public Fish
{
    public:
        void Swim()
        {
            cout << "Tuna swims fast in the sea!" << endl;
        }
};

class Carp:public Fish
{
    public:
        void Swim()
        {
            cout << "Carp swims slow in the lake!" << endl;
        }
};

void MakeFishSwim(Fish& inputFish)
{
    inputFish.Swim();
}

int main()
{
    // Fish myFish; // Fails, cannot instantiate an ABC
    Carp myLunch;
    Tuna myDinner;

    MakeFishSwim(myLunch);
    MakeFishSwim(myDinner);

    return 0;
}
