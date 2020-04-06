/*
 * =====================================================================================
 *
 *       Filename:  ex25_01.cpp
 *
 *    Description:  Write a bitset class that contains four bits. Initialize it to a number,
   display the result, and add it to another bitset object.(The catch: Bitsets
   don't allow bitsetA = bitsetX + bitsetY.)
 *
 *        Version:  1.0
 *        Created:  2020年04月01日 21时52分12秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  bo lee
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>
#include<bitset>

using namespace std;

int main()
{
    bitset<4> fourBits(1101);
    cout << fourBits <<endl;

    bitset<4> anotherBits(1011);
    cout << "another:" << anotherBits;
    cout << endl;
    bitset<4> resultBits;

    resultBits= (fourBits | anotherBits);
    cout << "Result:" << resultBits;
    cout << endl;
    cout << (fourBits | anotherBits);
    cout << endl;
    return 0;
}

