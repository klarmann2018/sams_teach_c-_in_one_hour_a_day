/*
 * =====================================================================================
 *
 *       Filename:  LISTing04_05.cpp
 *
 *    Description:  Analyzing the Null Terminator in a C-style String
 *
 *        Version:  1.0
 *        Created:  2018年09月08日 20时58分41秒
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
    char SayHello[] = {'H','e','l','l','o',' ','W','o','r','l','d'};

    cout << SayHello << endl;
    cout<< "size of the SayHello: " << sizeof(SayHello)<<endl;

    cout << "Replacing space with null" << endl;
    SayHello[5]='\0';
    cout<<SayHello<<endl;
    cout<< "Size of array: " << sizeof(SayHello) << endl;

    return 0;
}
