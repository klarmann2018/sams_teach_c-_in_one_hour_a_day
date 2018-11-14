/*
 * =====================================================================================
 *
 *       Filename:  listing_0508.cpp
 *
 *    Description:  Demonstrating the Use of Bitwise Operators to Perform NOT,
 *    AND, OR, and XOR on individual Bits in an Integer
 *
 *        Version:  1.0
 *        Created:  2018年10月02日 11时33分37秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  bo lee
 *   Organization:  
 *
 * =====================================================================================
 */
#include<iostream>
#include<bitset>
using namespace std;

int main()
{
    cout << "Enter a number (0 - 255)" ;
    unsigned short InputNum = 0;
    cin >> InputNum;

    bitset<8> InputBits(InputNum);
    cout << InputNum << " in binary is " << InputBits << endl;

    bitset<8> BitwiseNOT = (~InputNum);
    cout << "Logical NOT |" << endl;
    cout << "~" << InputBits << " = " << BitwiseNOT << endl;

    cout << "Logical AND, & with 00001111" << endl;
    bitset<8> BitwiseAND = (0x0F & InputNum);
    cout << "0001111 & " << InputBits << " = " << BitwiseAND << endl;

    cout << "Logical OR, | with 00001111" << endl;
    bitset<8> BitwiseOR = (0x0F | InputNum);
    cout << "00001111 |" << InputBits << " = " << BitwiseOR << endl;

    cout << "Logical xor, ^ with 00001111" << endl;
    bitset<8> BitwisexOR = (0x0F ^ InputNum);
    cout << "00001111 ^ " << InputBits << " = " << BitwisexOR << endl;


    return 0;
}

