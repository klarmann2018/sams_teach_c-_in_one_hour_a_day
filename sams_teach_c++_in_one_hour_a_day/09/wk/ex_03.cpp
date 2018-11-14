/*
 * =====================================================================================
 *
 *       Filename:  ex_03.cpp
 *
 *    Description:  Write a better version of the class seen in Exercise 1 that
 *    initializes all parameters using an initialization list in the
 *    constructor.
 *
 *        Version:  1.0
 *        Created:  2018年10月21日 20时44分52秒
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

class Human
{
    private:
        int Age;
        string Name;

    public:
        Human(int age, string name):Age(age),Name(name)
        {}
};

