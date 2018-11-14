/*
 * =====================================================================================
 *
 *       Filename:  listing9_02.cpp
 *
 *    Description:  bo lee aufstehen!! A Model of Class Human Where the True Age
 *    Is Abstracted from the User and a Younger Age is Reproted
 *
 *        Version:  1.0
 *        Created:  2017年02月13日 18时06分44秒
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

class Human
{
    private:
        // Private member data:
        int age;
    public:
        void SetAge (int Age)
        {
            age = Age;
        }
        int GetAge ()
        {
            if (age > 30)
                return (age - 2);
            else
                return age;
        }
};

int main()
{
    Human eva;
    eva.SetAge (33);

    Human adam;
    adam.SetAge (20);

    cout << " eva age: " << eva.GetAge() << endl;
    cout << " adam age: " << adam.GetAge() << endl;

}
