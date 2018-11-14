/*
 * =====================================================================================
 *
 *       Filename:  LISTing04_06.cpp
 *
 *    Description:  A Risky Application Using C-style String and User input
 *
 *        Version:  1.0
 *        Created:  2018年09月11日 22时34分58秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  bo lee
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    cout << "Enter a word NOT longer than 20 characters: " << endl;

    char UserInput[21]={'\0'};
    cin >> UserInput ;

    cout<< "Length of your input was: " << strlen(UserInput)<<endl;

    return 0;
}
