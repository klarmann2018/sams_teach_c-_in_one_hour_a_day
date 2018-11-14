/*
 * =====================================================================================
 *
 *       Filename:  listing10_2.cpp
 *
 *    Description: fish 改进版， 使用protected
 *
 *        Version:  1.0
 *        Created:  2017年03月04日 19时03分42秒
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
protected:
    bool freshWaterFish;
    public:
    void swim() {
        if(freshWaterFish) {

            cout << "swim in Lake " << endl;
        } else {
            cout << "swim in See " <<endl;
        }

    }

};
class Carp:public Fish {

public:
    Carp() {
        freshWaterFish=true;

    }
};
class Tuna:public Fish {
public:
    Tuna() {
        freshWaterFish=false;

    }

};

int main() {
    Carp myLunch;
    Tuna myDinner;

    cout<<"Getting my food to swim"<<endl;

    cout << "my lunch:";
    myLunch.swim();
    cout << endl;

    cout << "my dinner:";
    myDinner.swim();
    cout<< endl;
    return 0;
}
