/*
 * =====================================================================================
 *
 *       Filename:  ex_02.cpp
 *
 *    Description:  How would the user of the class in Exercise 1 access member
 *    Human::Age?
 *
 *        Version:  1.0
 *        Created:  2018年10月21日 20时38分00秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  bo lee
 *   Organization:  
 *
 * =====================================================================================
 */

class Human
{
    private:
        int Age;
        string Name;

    public:
        Human(){};

        int GetAge()
        {
            return Age;
        }

        void SetAge(int inputage)
        {
            this.Age=inputage;
        }
}

