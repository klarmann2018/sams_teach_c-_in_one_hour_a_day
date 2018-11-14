/*
 * =====================================================================================
 *
 *       Filename:  listing_0605.cpp
 *
 *    Description:  Tell What Days of the Week Are Named After Using
 *    switch-case, break, and default 
 *
 *        Version:  1.0
 *        Created:  2018年10月07日 09时33分38秒
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

int main()
{
    enum DayOfWeek
    {
        Sunday = 0,
        Monday,
        Tuesday,
        Wednesday,
        Thursday,
        Friday,
        Saturday
    };

    cout << "Find what days of the week are named after!"  << endl;
    cout << "Enter a number for a day (Sunday = 0): ";

    int Day = Sunday; // Initialize to Sunday
    cin >> Day;

    switch(Day)
    {
        case Sunday:
            cout << "Sunday was named after the Sun" << endl;
            break;
            
        case Monday:
            cout << "Monday was named after the Moon" << endl;
            break;
            
        case Tuesday:
            cout << "Tuesday was named after Mars" << endl;
            break;

        case Wednesday:
            cout << "Wednesday was named after Mercury" << endl;
            break;

        case Thursday:
            cout << "Thursday was named after Jupiter" << endl;
            break;

        case Friday:
            cout << "Friday was named after Venus" << endl;
            break;

        case Saturday:
            cout << "Saturday was named after Saturn" << endl;
            break;

        default:
            cout << "wrong input, execute again" <<endl;
            break;
    }

    return 0;
}


