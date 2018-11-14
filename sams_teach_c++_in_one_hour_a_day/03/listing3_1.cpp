/*
 * =====================================================================================
 *
 *       Filename:  listing3_1.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  18/09/16 18:31:37
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Lee bo 
 *   Organization:  
 *
 * =====================================================================================
 */
#include<iostream>
using namespace std;

int main()
{
    cout << "this programm will help you multiply two numbers"<<endl;

    cout << "Enter first number: ";
    int FirstNumber=0;
    cin >> FirstNumber;

    cout << "Enter second number: ";
    int SecondNumber=0;
    cin >> SecondNumber;

    // Multiply two numbers, store result in a variable
    int Multiplicationresult=FirstNumber*SecondNumber;

    // Display result
    cout << FirstNumber << "X" << SecondNumber;
    cout << "=" << Multiplicationresult<< endl;

    return 0;


}


