/*
 * =====================================================================================
 *
 *       Filename:  listing14_01.cpp
 *
 *    Description:  Declaring and Using Macros That Define Constants
 *
 *        Version:  1.0
 *        Created:  01/26/2020 05:14:16 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  bo lee
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include<iostream>
#include<string>
using namespace std;

#define ARRAY_LENGTH 25
#define PI 3.1416
#define MY_DOUBLE double
#define FAV_WHISKY "Jack Daniels"

int main()
{
    int MyNumbers[ARRAY_LENGTH] = {0};
    cout << "Array's length: " << sizeof(MyNumbers)/sizeof(int) << endl;

    cout << "Enter a radius: "; 
    MY_DOUBLE Radius = 0;
    cin >> Radius;
    cout << "Area is: " << PI * Radius * Radius << endl;
    
    string FaveriteWhisky(FAV_WHISKY);
    cout << "My favorite drink is: " << FAV_WHISKY << endl;

    return 0;
}
