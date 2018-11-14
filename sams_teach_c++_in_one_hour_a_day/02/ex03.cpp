
/*
 * =====================================================================================
 *
 *       Filename:  ex03.cpp
 *
 *    Description:  自学成才
 *
 *        Version:  1.0
 *        Created:  2016-09-10 22:25:36
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  bo lee
 *   Organization:  中环豪庭
 *
 * =====================================================================================
 */
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
    cout<<"Performing subtraction 10-5= "<<10-5<<endl;
    cout<<"multiplication is 22*7= "<<22*7<<endl;
    return 0;
    
}
