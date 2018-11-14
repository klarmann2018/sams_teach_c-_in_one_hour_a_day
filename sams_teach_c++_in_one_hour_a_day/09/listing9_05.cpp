/*
 * =====================================================================================
 *
 *       Filename:  listing9_05.cpp
 *
 *    Description:  constructor with initialization list; A Class with
 *    Overloaded Constructor(s) and No Default Constructor
 *
 *        Version:  1.0
 *        Created:  2017年02月17日 18时41分39秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  bo lee
 *   Organization:  
 *
 * =====================================================================================
 */
#include<iostream>
#include<string>
using namespace std;

class Human
{
    private:
        // Private member data:
        string name;
        int age;

    public:
        
        // overloaded constructor (no default constructor)
        Human(string HumanName, int HumanAge):name(HumanName), age(HumanAge)
        {
            cout << "constructor a human called " << name;
            cout << " of age " << age << " years old" << endl;
        }

        void IntroduceSelf()
        {
            cout << "I am " + name << " and am ";
            cout << age << " years old" << endl;
        }
};
int main()
{
    // Uncomment next line to try creating using a default constructor
    // Human firstman;
    Human man ("bo lee", 40);
    man.IntroduceSelf();

    return 0;
}
