/*
 * =====================================================================================
 *
 *       Filename:  listing13_01.cpp
 *
 *    Description:  Using Dynamic Casting to Tell Whether an Fish Object Is a
 *    Tuna or a Carp
 *
 *        Version:  1.0
 *        Created:  01/24/2020 05:21:39 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  bo lee
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include<iostream>
using namespace std;
class Fish
{
    public:
        virtual void Swim()
        {
            cout << "Fish swims in water" << endl;
        }

        // base class should always have virtual destructor
        virtual ~Fish(){}
};

class Tuna: public Fish
{
    public:
        void Swim()
        {
            cout << "Tuna swims real fast in the sea" << endl;
        }

        void BecomeDinner()
        {
            cout << "Tuna became dinner in Sushi" << endl;
        }
};

class Carp: public Fish
{
    public:
        void Swim()
        {
            cout << "Carp swims real slow in the lake" << endl;
        }

        void Talk()
        {
            cout << "Carp talk crap" << endl;
        }
};

void DetectFishType(Fish* InputFish)
{
    Tuna* pIsTuna = dynamic_cast <Tuna*>(InputFish);
    if(pIsTuna)
    {
        cout << "Detected Tuna. Making Tuna dinner: " << endl;
        pIsTuna->BecomeDinner(); // calling Tuna::BecomeDinner
    }

    Carp* pIsCarp = dynamic_cast<Carp*>(InputFish);
    if(pIsCarp)
    {
        cout << "Detected Carp. Making carp talk: " << endl;
        pIsCarp->Talk(); // calling Carp::Talk
    }

    cout << "Verifying type using virtual Fish::Swim: " << endl;
    InputFish->Swim(); // calling virtual function Swim
}

int main()
{
    Carp myLunch;
    Tuna myDinner;

    DetectFishType(&myDinner);
    cout << endl;
    DetectFishType(&myLunch);

    return 0;
}
