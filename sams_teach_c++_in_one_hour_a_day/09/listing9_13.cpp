/*
 * =====================================================================================
 *
 *       Filename:  listing9_13.cpp
 *
 *    Description:  Using the friend Keyword to Allow an External Function
 *    DisplayAge() Access to Private Data Members
 *
 *        Version:  1.0
 *        Created:  2018年10月18日 00时21分35秒
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

        friend void DisplayAge(const Human& Person);

    public:
        Human(string InputName, int InputAge)
        {
            Name = InputName;
            Age = InputAge;
        }

};

void DisplayAge(const Human& Person)
{
    cout << Person.Age << endl;
}

int main()
{
    Human FirstMan("Adam", 25);
    cout << "Accessing private member Age via friend: ";
    DisplayAge(FirstMan);

    return 0;
}
