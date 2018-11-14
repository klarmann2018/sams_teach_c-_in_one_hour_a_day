/*
 * =====================================================================================
 *
 *       Filename:  listing9_03.cpp
 *
 *    Description:  constructor Using Constructors to Initialize Class Member
 *    Variables
 *
 *        Version:  1.0
 *        Created:  2017年02月14日 09时31分53秒
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
        // Private member data:
        string name;
        int age;
    public:
        // constructor
        Human()
        {
            age = 0; // initialized to ensure no junk value
            name = "bo lee";
            cout << "Constructed an instance of class Human" << endl;
        }

        void SetName (string HumanName)
        {
            name = HumanName;
        }

        void SetAge (int HumanAge)
        {
            age = HumanAge;
        }

        void introduceSelf ()
        {
            cout << "I am " + name << endl;
            cout << "I am " << age << " years old. " << endl;
        }

};

int main ()
{
    Human adam;
    adam.SetName ("adam");
    adam.SetAge (33);

    Human eva;
    eva.SetName ("eva");
    eva.SetAge (22);

    adam.introduceSelf();
    eva.introduceSelf();

    Human bo;
    bo.introduceSelf();

    return 0;
}
