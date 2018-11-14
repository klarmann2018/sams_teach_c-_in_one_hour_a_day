/*
 * =====================================================================================
 *
 *       Filename:  listing11_2.cpp
 *
 *    Description:  The Effect of Declaring Fish::Swim() as a virtual Method,
 *    虚函数 在 父类中的 作用
 *
 *        Version:  1.0
 *        Created:  2017年03月09日 11时10分20秒
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
    virtual void swim() 
    {
        cout << "Fish can swim.!" << endl;
    }
};

class Carp:public Fish
{
public:
    void swim() 
    {
        cout << "Carp swim!" << endl;
    }
};

class Tuna:public Fish 
{
public:
    void swim() 
    {
        cout << "Tuna swim!" << endl;
    }
};

void MakeFishSwim(Fish& InputFish)
{
    // calling virtual method swim()
    InputFish.swim();
}

int main() 
{
    Carp myLunch;
    Tuna myDinner;

    // sending Tuna as Fish
    MakeFishSwim(myDinner);

    // sending Carp as Fish
    MakeFishSwim(myLunch);

    //myLunch.swim();
    //myDinner.swim();

    return 0;
}
