/*
 * =====================================================================================
 *
 *       Filename:  listing11_1.cpp
 *
 *    Description:  invoking mothods using an instance of the base class fish, that belongs to a Tuna
 *
 *        Version:  1.0
 *        Created:  2017年03月08日 22时20分38秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  bo lee
 *   Organization:
 *
 * =====================================================================================
 */
#include <iostream>
using namespace std;

class Fish 
{
public:
    void swim() 
    {
        cout <<"Fish swims!" << endl;
    }

};

class Tuna: public Fish 
{
public:
    void swim() 
    {
        cout << "tuna swims!" << endl;
    }
};

void makeFishSwim(Fish& inputFish) 
{
    inputFish.swim();
}

int main() 
{
    Tuna myDinner;
    
    //calling Tuna::swim()
    myDinner.swim();

    //sending tuna as Fish
    makeFishSwim(myDinner);

    return 0;
}
