/*
 * =====================================================================================
 *
 *       Filename:  listing12_03.cpp
 *
 *    Description:  using smart pointer unique_ptr to Manage a Dynamically
 *    allocated Instance of class date
 *
 *        Version:  1.0
 *        Created:  2017年03月14日 03时47分21秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  bo lee
 *   Organization:
 *
 * =====================================================================================
 */
#include<iostream>
#include<memory>    //include this to use std::unique_ptr
using namespace std;

class Date {
private:
    int day;
    int month;
    int year;

    string dateInString;

public:
    Date(int InputDay, int InputMonth, int InputYear):day(InputDay),month(InputMonth),year(InputYear) {}
    void displayDate() {
        cout<<day<<"/"<<month<<"/"<<year<<endl;
    }
};

int main() {
    unique_ptr<int> pDynamicAllocInteger(new int);
    *pDynamicAllocInteger=42;

    cout<<"Integer value is: " << *pDynamicAllocInteger<<endl;

    unique_ptr<Date> pHoliday(new Date(25,11,2011));
    cout<< "The new instance of date contains: ";
    pHoliday->displayDate();

    return 0;
}
