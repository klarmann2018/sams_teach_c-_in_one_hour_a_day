/*
 * =====================================================================================
 *
 *       Filename:  listing14_05.cpp
 *
 *    Description:  The Effect of Static Variables on Template Class and
 *    Instances Thereof
 *
 *        Version:  1.0
 *        Created:  02/02/2020 07:59:43 PM
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

template <typename T>
class TestStatic
{
    public:
        static int StaticValue;
};

// static member initialization
template<typename T> int TestStatic<T>::StaticValue;

int main()
{
    TestStatic<int> Int_Year;
    cout << "Setting StaticValue for Int_Year to 2011" << endl;
    Int_Year.StaticValue = 2011;
    TestStatic<int> Int_2;

    TestStatic<double> Double_1;
    TestStatic<double> Double_2;
    cout << "Setting StaticValue for Double_2 to 1011" << endl;
    Double_2.StaticValue = 1011;

    cout << "Int_2.StaticValue = " << Int_2.StaticValue << endl;
    cout << "Double_1.StaticValue = " << Double_1.StaticValue << endl;

    return 0;
}

