/*
 * =====================================================================================
 *
 *       Filename:  ex18_01.cpp
 *
 *    Description:  Write a short program that accepts numbers from the user and inserts them at the
top of the list.
 *
 *        Version:  1.0
 *        Created:  2020年03月23日 19时42分23秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  bo lee
 *   Organization:  
 *
 * =====================================================================================
 */
#include <list>
#include <iostream>
using namespace std;
template <typename T>
void DisplayContents(T& input)
{
    for(auto iElement=input.cbegin()
            ; iElement != input.cend()
            ; ++ iElement)
        cout << * iElement << ' ';
    cout << endl;
}
int main()
{
    char chChoiceOpt='\0';
    cout << "Enter your choice:" << endl;
    cout << "1. insert input number" <<endl;
    cout << "2. quit." << endl;
    cin >> chChoiceOpt;
    
    list<int> listInputIntegers;
    while(chChoiceOpt !='2'){
    
        if(chChoiceOpt=='1') 
        {
            cout << "please enter numbers: " << endl;
            int nInput=0;
            cin >> nInput;

            listInputIntegers.push_back(nInput);
        }

        cout << "Enter your choice:" << endl;
        cout << "1. insert input number" <<endl;
        cout << "2. quit." << endl;
        cin >> chChoiceOpt;
    }

    cout << "the result: " << endl;
    DisplayContents(listInputIntegers);
    return 0;
}

