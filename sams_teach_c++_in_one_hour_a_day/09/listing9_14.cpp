/*
 * =====================================================================================
 *
 *       Filename:  listing9_14.cpp
 *
 *    Description:  Using the friend Keyword to Allow an External Class Utility
 *    Access to Private Data Members
 *
 *        Version:  1.0
 *        Created:  2018年10月18日 16时03分24秒
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
        string Name;
        int Age;

        friend class Utility;

    public:
        Human(string InputName, int InputAge)
        {
            Name = InputName;
            Age = InputAge;
        }
};

class Utility
{
    public:
        static void DisplayAge(const Human& Person)
        {
            cout << Person.Age << endl;
        }
};

int main()
{
    Human FirstMan("Adam", 25);
    cout << "Accessing private member Age via friend class: ";
    Utility::DisplayAge(FirstMan);

    return 0;
}
