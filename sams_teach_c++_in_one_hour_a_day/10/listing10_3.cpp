/*
 * =====================================================================================
 *
 *       Filename:  listing10_3.cpp
 *
 *    Description:  fish 进一步改进, initialization list
 *
 *        Version:  1.0
 *        Created:  2017年03月04日 19时33分08秒
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

class Fish {
//protected:
    private:
    bool freshWaterFish;
public:
    Fish(bool isFreshWaterFish):freshWaterFish(isFreshWaterFish) {}

    void swim() {
        if(freshWaterFish) {
            cout<<"swim in Lake."<<endl;
        } else {
            cout<<"swim in See." <<endl;
        }
    }

};

class Carp:public Fish {
public:
    Carp():Fish(true) {}

};

class Tuna:public Fish {
public:
    Tuna():Fish(false) {}

};

int main() {
    Carp myLunch;
    Tuna myDinner;

    cout << "getting my food swim" <<endl;

    cout << "my lunch:";
    myLunch.swim();
    cout<<endl;

    cout << "my dinner:";
    myDinner.swim();
    cout<<endl;

    return 0;
}
