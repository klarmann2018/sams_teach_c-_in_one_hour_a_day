/*
 * =====================================================================================
 *
 *       Filename:  listing2_4.cpp
 *
 *    Description:  自学成才
 *
 *        Version:  1.0
 *        Created:  08/08/2016 03:58:21 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  bo lee
 *   Organization:  中环豪庭
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
using namespace std;

//Function declaration
int DemoConsoleOutput();

int main()
{
  // Call i.e. invoke the function
    DemoConsoleOutput();
    return 0;

}

// Function definition 
int DemoConsoleOutput()
{
    cout<<"This is a simple string literal "<<endl;
    cout<<"Writing number five: "<<5<<endl;
    cout<<"Performing division 10/5= "<<10/5<<endl;
    cout<<"Pi when approximated is 22/7= "<<22/7<<endl;
    cout<<"Pi more accurately is 22/7= "<<22.0/7<<endl;
    return 0;
    
}
