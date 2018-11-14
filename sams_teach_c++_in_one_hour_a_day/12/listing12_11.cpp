/*
 * =====================================================================================
 *
 *       Filename:  listing12_11.cpp
 *
 *    Description:  A Function Object Created Using Operator ()
 *
 *        Version:  1.0
 *        Created:  2017年11月29日 07时25分49秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Bo
 *   Organization:
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <string>
#include <iostream>
using namespace std;

class CDisplay
{
public:
    void operator () (string Input) const
    {
        cout << Input << endl;
    }

};

int main()
{
    CDisplay mDisplayFuncObject;
// equivalent to mDisplayFuncObject.operator () ("Display this string!");
    mDisplayFuncObject("Display this string!");

    return 0;
}
