/*
 * =====================================================================================
 *
 *       Filename:  ex25_02.cpp
 *
 *    Description:  Demonstrate how you would toggle(that is, switch) the bits in a bitset.
 *
 *        Version:  1.0
 *        Created:  2020年04月01日 22时03分54秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  bo lee
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>
#include <bitset>
using namespace std;

int main()
{
    bitset<8> eightBits(11010101);
    cout << "eightBits:" << eightBits << endl;

    cout << "flip::" << eightBits.flip() << endl;
    return 0;
}

