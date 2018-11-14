/*
 * =====================================================================================
 *
 *       Filename:  listing_0504.cpp
 *
 *    Description:  Demonstrating Equality and Relational Operators
 *
 *        Version:  1.0
 *        Created:  2018年10月01日 19时08分52秒
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

int main()
{
    cout << "Enter two integers: " << endl;
    int Num1 = 0, Num2 = 0;
    cin >> Num1;
    cin >> Num2;
    
    bool Equality = (Num1 == Num2 );
    cout << "Result of equality test: " << Equality << endl;

    bool InEquality= (Num1 != Num2);
    cout << "Result of inequality test: " << InEquality << endl;

    bool GreaterThan = (Num1 > Num2);
    cout << "Result of " << Num1 << " > " << Num2;
    cout << " test: " << GreaterThan << endl;

    bool LessThan = (Num1 < Num2);
    cout << "Result of " << Num1 << " < " << Num2;
    cout << " test: " << LessThan << endl;

    bool GreaterThanEquals = (Num1 >= Num2);
    cout << "Result of " << Num1 << " >= " << Num2;
    cout << " test: " << GreaterThanEquals << endl;

    bool LessThanEquals = (Num1 <= Num2);
    cout << "Result of " << Num1 << " <= " << Num2;
    cout << " test: " << LessThanEquals << endl;

    return 0;
}
