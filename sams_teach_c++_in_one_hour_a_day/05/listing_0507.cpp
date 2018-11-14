/*
 * =====================================================================================
 *
 *       Filename:  listing_0507.cpp
 *
 *    Description:  Using Logical NOT and Logical OR Operators to Help You
 *    Decide If You Can Buy That Dream Car
 *
 *        Version:  1.0
 *        Created:  2018年10月02日 08时13分24秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  bo lee
 *   Organization:  
 *
 * =====================================================================================
 */
#include<iostream>
using namespace std;

int main()
{
    cout << "Answer questions with 0 or 1" << endl;
    cout << "Is there a deep discount on your favorite car? " ;
    bool Discount = false;
    cin >> Discount;

    cout << "Did you get a fantastic bonus? ";
    bool FantasticBonus = false;
    cin >> FantasticBonus;

    if(Discount || FantasticBonus)
        cout << "Congratulations, you can buy that car!" << endl;
    else
        cout << "Sorry, waiting a while is a good idea" << end;

    return 0;
}

