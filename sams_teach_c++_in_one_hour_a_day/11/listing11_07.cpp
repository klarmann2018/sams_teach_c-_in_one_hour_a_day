/*
 * =====================================================================================
 *
 *       Filename:  listing11_07.cpp
 *
 *    Description:  Checking for the Number of Base Class Animal Instances for
 *    One Instance of Platypus
 *
 *        Version:  1.0
 *        Created:  11/20/2018 07:23:22 PM
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

class Mammal:public Animal
{
};

class Bird:public Animal
{
};

class Reptile:public Animal
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

    // uncomment next line to see compile failure
    // Age is ambiguous as there are three instances of base Animal
    // duckBilledP.Age = 25;

    //duckBilledP.Mammal::Animal::Age = 25;

    return 0;
}
