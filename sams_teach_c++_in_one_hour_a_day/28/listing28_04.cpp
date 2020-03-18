/*
 * =====================================================================================
 *
 *       Filename:  listing28_04.cpp
 *
 *    Description:  The Destruction Order of Local Objects in Event of an
 *    Exception
 *
 *        Version:  1.0
 *        Created:  03/17/2020 08:38:22 PM
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

struct StructA
{
    StructA() {cout << "Constructed a struct A" << endl; }
    ~StructA() {cout << "Destroyed a struct A" << endl; }
};

struct StructB
{
    StructB(){cout << "Constructed a struct B" << endl; }
    ~StructB() {cout << "Destroyed a struct B" << endl; }
};

void FuncB()    // throws
{
    cout << "In Func B" << endl;
    StructA objA;
    StructB objB;
    cout << "About to throw up!" << endl;
    throw "Throwing for the heck of it";
}

void FuncA()
{
    try
    {
        cout << "In Func A" << endl;
        StructA objA;
        StructB objb;
        FuncB();
        cout << "FuncA: returning to caller" << endl;
    }
    catch(const char* exp)
    {
        cout << "FuncA: Caught exception, it says: " << exp << endl;
        cout << "FuncA: Handled it here, will not throw to caller" << endl;
        // throw;   // uncomment this line to throw to main()
    }
}

int main()
{
    cout << "main(): Started execution" <<endl;
    try
    {
        FuncA();
    }
    catch(const char* exp)
    {
        cout << "Exception: "  << exp << endl;
    }
    cout << "main(): exiting gracefully" << endl;
    return 0;
}

