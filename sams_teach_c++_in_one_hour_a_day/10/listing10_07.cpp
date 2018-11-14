/*
 * =====================================================================================
 *
 *       Filename:  listing10_07.cpp
 *
 *    Description:  The Order of Construction and Destruction of the Base Class,
 *    Derived Class, and Members Thereof
 *
 *        Version:  1.0
 *        Created:  10/24/2018 05:36:44 PM
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

class FishDummyMember
{
    public:
        FishDummyMember()
        {
            cout << "FishDummyMember constructor" << endl;
        }

        ~FishDummyMember()
        {
            cout << "FishDummyMember constructor" << endl;
        }
};

class Fish
{
    protected:
        FishDummyMember dummy;

    public:
        // Fish constructor
        Fish()
        {
            cout << "Fish constructor" << endl;
        }

        ~Fish()
        {
            cout << "Fish destructor" << endl;
        }
};

class TunaDummyMember
{
    public:
        TunaDummyMember()
        {
            cout << "TunaDummyMember constructor" << endl;
        }

        ~TunaDummyMember()
        {
            cout << "TunaDummyMember destructor" << endl;
        }
};

class Tuna: public Fish
{
    private:
        TunaDummyMember dummy;

    public:
        Tuna()
        {
            cout << "Tuna constructor" << endl;
        }
        ~Tuna()
        {
            cout << "Tuna destructor" << endl;
        }
};

int main()
{
    Tuna myDinner;
}
