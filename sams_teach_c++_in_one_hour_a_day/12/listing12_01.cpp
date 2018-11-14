/*
 * =====================================================================================
 *
 *       Filename:  listing12_01.cpp
 *
 *    Description:  A carlendar class that handles days, months, years, that
 *    incrementing and decrementing days
 *
 *        Version:  1.0
 *        Created:  2017年03月13日 23时38分58秒
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

class Date {
private:
    int day,month,year;
public:
    Date(int InputDay,int InputMonth,int InputYear):day(InputDay),month(InputMonth),year(InputYear) {}
    void displayDate() {
        cout<< day <<"/"<<month<<"/"<<year<<endl;
    }

    Date& operator ++() {
        day++;
        return *this;
    }
    Date& operator --() {
        day--;
        return *this;
    }

};

int main() {
    Date holiday(25,12,2016);

    cout<<"the date object is initialized to: ";
    holiday.displayDate();

    ++holiday;
    cout<<"the date after prefix-increment: ";
    holiday.displayDate();

    --holiday;
    --holiday;
    cout<<"the date after two prefix-decriments: ";
    holiday.displayDate();

    return 0;
}
