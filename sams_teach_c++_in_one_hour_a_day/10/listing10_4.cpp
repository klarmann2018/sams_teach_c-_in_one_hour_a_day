/*
 * =====================================================================================
 *
 *       Filename:  listing10_4.cpp
 *
 *    Description:  fish, overriding method carp, tuna overriding "swim" method
 *
 *        Version:  1.0
 *        Created:  2017年03月04日 20时14分36秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  bo lee
 *   Organization:
 *
 * =====================================================================================
 */
#include <iostream>
#include <typeinfo>
using namespace std;

class Fish {
private:
    bool freshWaterFish;
public:
    Fish(bool isFreshWaterFish):freshWaterFish(isFreshWaterFish) {}
    void swim() {
        if(freshWaterFish) {
            cout<<"swim in the lake."<<endl;
        } else
            cout<<"swim in the See."<<endl;
    }

};
class Carp:public Fish {
public:
    Carp():Fish(true) {}
    void swim() {
        cout<<"Carp swim real slow!!"<<endl;
    }

    void printName(){
       cout << "name:" << typeid(Carp).name()<<endl; 
    }
};
class Tuna : public Fish {
public:
    Tuna():Fish(false) {}

    void swim() {
        cout << "Tuna swim real fast!!!"<<endl;
    }

};
int main() {
    Carp myLunch;
    Tuna myDinner;

    cout<<"getting my food to swim"<<endl;

    myLunch.swim();
    myDinner.swim();

    cout<< "invoking base class (Fish) method in a derived class(Carp):"<<endl;
    myLunch.printName();
    myLunch.Fish::swim();

    return 0;
}

