/*
 * =====================================================================================
 *
 *       Filename:  listing11_05.cpp
 *
 *    Description:  Demonstrating the Presence of a Hidden VFT Pointer in
 *    Comparing Two Classes Identical but for a Function Declared Virtual
 *
 *        Version:  1.0
 *        Created:  11/16/2018 06:41:25 AM
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

class SimpleClass
{
    int a, b;

    public:
        void FuncDoSomething() {}
};

class Base
{
    int a, b;
    
    public:
        virtual void FuncDoSomething(){}
};

int main()
{
    cout << "sizeof(SimpleClass) = " << sizeof(SimpleClass) << endl;
    cout << "sizeof(Base) = " << sizeof(Base) << endl;

    return 0;
}
