/*
 * =====================================================================================
 *
 *       Filename:  listing11_6.cpp
 *
 *    Description:  class Fish as an Abstract Base Class for Tuna and Carp
 *
 *        Version:  1.0
 *        Created:  2017年03月09日 18时17分25秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (),
 *   Organization:
 *
 * =====================================================================================
 */
#include<iostream>
using namespace std;

class Fish {
public:
    virtual void swim()=0;
};

class Tuna:public Fish {
public:
    void swim() {
        cout<<"Tuna swims fast in the sea!" << endl;
    }
};

class Carp:public Fish {
    void swim() {
        cout<<"Carp swims slow in the lake!"<<endl;
    }

};

void makeFishSwim(Fish& inputFish) {
    inputFish.swim();
}

int main() {

    Carp myLunch;
    Tuna myDinner;

    makeFishSwim(myLunch);
    makeFishSwim(myDinner);

    return 0;
}

