/*
 * =====================================================================================
 *
 *       Filename:  listing9_04.cpp
 *
 *    Description:  three constructors for class Human; A Class Human with
 *    Multiple Constructors
 *
 *        Version:  1.0
 *        Created:  2017年02月14日 18时41分28秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author: Bo Lee
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>
#include <string>
using namespace std;

class Human
{

    private:
        string name;
        int age;
    public:
        // constructor
        Human ()
        {
            age = 0; // initialized to ensure no junk value
            cout << "Default constructor creates an instant of Human" << endl;
        }

        //overloaded constructor that takes Name
        Human (string HumanName)
        {
            name = HumanName;
            age = 0; // initialized to ensure no junk value 
            cout << "Overloaded constructor creates " << name << endl;
        }

        //overloaded constructor that takes Name and Age
        Human (string HumanName, int HumanAge)
        {
            name = HumanName;
            age = HumanAge;
            cout << "Overloaded constructor creates ";
            cout << name << " of " << age << " years." << endl;
        }
        void setName (string HumanName)
        {
            name = HumanName;
        }

        void setAge (int HumanAge)
        {
            age = HumanAge;
        }

        void introduceSelf ()
        {
            cout << " I am " << name << " and am " << age << " years old" << endl;
        }
};

int main ()
{

    Human firstHuman; // use default constructor
    firstHuman.setName("adam");
    firstHuman.setAge(30);
    firstHuman.introduceSelf();

    Human secondHuman("eva"); // use overloaded constructor
    secondHuman.setAge(22);
    secondHuman.introduceSelf();

    Human thirdHuman("bo lee", 38); // use overloaded constructor
    thirdHuman.introduceSelf();

}
