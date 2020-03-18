/*
 * =====================================================================================
 *
 *       Filename:  listing26_04.cpp
 *
 *    Description:  Using std::unique_ptr
 *
 *        Version:  1.0
 *        Created:  03/16/2020 06:45:41 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  bo lee
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>
#include <memory>   // include this to use std::unique_ptr
using namespace std;

class Fish
{
    public:
        Fish(){cout << "Fish: Constructed!" << endl;}
        ~Fish() {cout << "Fish: Destructed!"<< endl;}
        
        void Swim() const {cout << "Fish swims in water" << endl;}
};

void MakeFishSwim(const unique_ptr<Fish>& inFish)
{
    inFish->Swim();
}

int main()
{
    unique_ptr<Fish> smartFish(new Fish);

    smartFish->Swim();
    MakeFishSwim(smartFish);    // OK, as MakeFishSwim accepts reference

    unique_ptr<Fish> copySmartFish;
    //copySmartFish = smartFish;  // error: operator= is private
    
    return 0;
}
