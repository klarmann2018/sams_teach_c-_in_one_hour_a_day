/*
 * =====================================================================================
 *
 *       Filename:  listing11_2.cpp
 *
 *    Description:  The effect of declaring Fish::swim() as a virtual method,
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

class Fish {
public:
    virtual void swim() {
        cout<<"Fish can swim.!"<<endl;
    }
};

class Carp {
public:
    void swim() {
        cout<<"Carp swim!"<<endl;
    }
};

class Tuna {
public:
    void swim() {
        cout<<"Tuna swim!"<<endl;
    }
};

int main() {
    Carp myLunch;
    Tuna myDinner;

    myLunch.swim();
    myDinner.swim();

}
