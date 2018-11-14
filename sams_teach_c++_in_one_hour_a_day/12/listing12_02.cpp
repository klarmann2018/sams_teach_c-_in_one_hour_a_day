/*
 * =====================================================================================
 *
 *       Filename:  listing12_02.cpp
 *
 *    Description:  conversion operator const char* for class Date
 *
 *        Version:  1.0
 *        Created:  2017年03月14日 03时23分19秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  bo lee
 *   Organization:
 *
 * =====================================================================================
 */
#include <iostream>
#include<sstream>
#include<string>
using namespace std;

class Date {
private:
    int day;
    int month;
    int year;
    string dateInString;
public:
    Date(int InputDay, int InputMonth, int InputYear):day(InputDay),month(InputMonth),year(InputYear) {}
    operator const char*() {
        ostringstream formattedDate;
        formattedDate<<day<<"/"<<month<<"/"<<year;

        dateInString=formattedDate.str();
        return dateInString.c_str();
    }
};

int main() {
    Date holiday(25,12,2011);

    cout<<"Holiday is on: "<<holiday<<endl;

    return 0;
}
