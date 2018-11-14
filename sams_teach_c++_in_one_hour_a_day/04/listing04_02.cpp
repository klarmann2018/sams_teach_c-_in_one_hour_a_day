/*
 * =====================================================================================
 *
 *       Filename:  LISTing04_02.cpp
 *
 *    Description:  Assigning Values to Elements in an Array
 *
 *        Version:  1.0
 *        Created:  2018年09月02日 15时53分04秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  bo li 
 *
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>
using namespace std;
int main()
{

    const int ARRAY_LENGTH=5;
    int MyNumbers[ARRAY_LENGTH]={0};

    cout<<"Enter Index of the element to be changed: "<<endl;
    int nElementIndex=0;
    cin>>nElementIndex;

    cout<<"Enter new value: ";
    cin>>MyNumbers[nElementIndex];


    cout << "First element at Index 0: " << MyNumbers[0] << endl;
    cout << "Second element at Index 1: " << MyNumbers[1] << endl;
    cout << "Third element at Index 2: " << MyNumbers[2] << endl;
    cout << "Fourth element at Index 3: " << MyNumbers[3] << endl;
    cout << "Fifth element at Index 4: " << MyNumbers[4] << endl;
 
    return 0;
}
