/*
 * =====================================================================================
 *
 *       Filename:  listing12_07.cpp
 *
 *    Description:  Demonstrates Operators == and !=
 *
 *        Version:  1.0
 *        Created:  11/03/2019 04:13:49 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author: bo lee  
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include<iostream>
using namespace std;
class Date
{
    private:
        int Day, Month, Year;

    public:

        //constructor that initializes the object to a day, month and year
        Date(int InputDay, int InputMonth, int InputYear)
            : Day(InputDay), Month(InputMonth), Year(InputYear){};

        bool operator == (const Date& compareTo)
        {
            return ((Day == compareTo.Day)&&(Month == compareTo.Month) &&(Year == compareTo.Year));
        }

        bool operator != (const Date& compareTo)
        {
            return !(this->operator==(compareTo));
        }

        void DisplayDate()
        {
            cout << Day << " / " << Month << " / " << Year << endl;
        }
};

int main()
{
    Date Holiday1(25,12,2011);
    Date Holiday2(25,12,2019);

    cout << "Holiday 1 is: ";
    Holiday1.DisplayDate();
    cout << "Holiday 2 is: ";
    Holiday2.DisplayDate();


    if(Holiday1 == Holiday2)
        cout << "Equality operator: The two are on the same day" << endl;
    else
        cout << "Equality operator: The two are on different days" << endl;

    if(Holiday1 != Holiday2)
        cout << "Inequality operator: The two are on different days" << endl;
    else
        cout << "Inequality operator: The two are the same day" << endl;


   return 0; 
}

