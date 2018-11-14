/*
 * =====================================================================================
 *
 *       Filename:  listing_0801.cpp
 *
 *    Description:  Determining the Addresses of an Int and a Double & Makefile
 *    Self Study
 *
 *        Version:  1.0
 *        Created:  2018年10月10日 21时42分55秒
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
    cout << "hallo !! this is 0801." << endl;
    
    int Age = 30;
    const double Pi = 3.1416;

    // Use & to find the address in memory
    cout << "Integer Age is at: 0x" << hex << &Age << endl;
    cout << "Double Pi is located at 0x" << hex << &Pi << endl;
    
    cout << "size of int on my computer: " << sizeof(int) << endl;
    cout << "size of double on my computer: " << sizeof(double) << endl;

    return 0;
}
