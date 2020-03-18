/*
 * =====================================================================================
 *
 *       Filename:  listing27_11.cpp
 *
 *    Description:  Converting an Integer Value into a String Representation and
 *    Vice Versa Using std::stringstream
 *
 *        Version:  1.0
 *        Created:  03/17/2020 07:38:46 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  bo lee
 *   Organization:  
 *
 * =====================================================================================
 */
#include <fstream>
#include <sstream>
#include <iostream>
using namespace std;

int main()
{
    cout << "Enter an integer: ";
    int Input = 0;
    cin >> Input;

    stringstream converterStream;
    converterStream << Input;
    string strInput;
    converterStream >> strInput;

    cout << "Integer Input = " << Input << endl;
    cout << "String gained from integer, strInput = " << strInput << endl;

    stringstream anotherStream;
    anotherStream << strInput;
    int Copy = 0;
    anotherStream >> Copy;

    cout << "Integer gained from string, Copy = " << Copy << endl;

    return 0;
}


