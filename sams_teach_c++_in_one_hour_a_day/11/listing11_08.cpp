/*
 * =====================================================================================
 *
 *       Filename:  listing11_08.cpp
 *
 *    Description:  Demonstrating How virtual Keyword in Inheritance Hierarchy
 *    Helps Restrict the Number of Instances of Base Class Animal to One
 *
 *        Version:  1.0
 *        Created:  07/20/2019 09:04:18 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  bo lee
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>
using namespace std;

class Animal
{
    public:
        Animal()
        {
            cout << "Animal constructor" << endl;
        }

        // sample method
        int Age;
};

class Mammal: public virtual Animal
{
};

class Bird:public virtual Animal
{
};

class Reptile:public virtual Animal
{
};

class Platypus:public Mammal, public Bird, public Reptile
{
    public:
        Platypus()
        {
            cout << "Platypus constructor" << endl;
        }
};

int main()
{
    Platypus duckBilledP;

    // no compile error as there is only one Animal::Age
    duckBilledP.Age = 25;

    return 0;
}


