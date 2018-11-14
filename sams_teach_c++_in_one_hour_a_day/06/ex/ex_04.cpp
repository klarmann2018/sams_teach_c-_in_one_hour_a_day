/*
 * =====================================================================================
 *
 *       Filename:  ex_04.cpp
 *
 *    Description:  Write a Switch-case Construct that Tells if a Color is in
 *    the Rainbow or Otherwise. Use Enumerated Constants.
 *
 *        Version:  1.0
 *        Created:  2018年10月08日 18时50分02秒
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
    enum ColorOfRainBow
    {
        Violet = 0,
        Indigo,
        Blue,
        Green,
        Yellow,
        Orange,
        Red
    };

    cout << "Tells if a color is in the rainbow or otherwise!" << endl;
    cout << "Enter a color (Violet = 0):";
    int Color = Violet;
    cin >> Color;

    switch (Color)
    {
        case Violet: 
            cout << "Violet is in the rainbow color" << endl;
            break;

        case Indigo:
            cout << "Indigo is in the rainbow color" << endl;
            break;

        case Blue:
            cout << "Blue is in the rainbow color" << endl;
            break;
            
        case Green:
            cout << "Green is in the rainbow color" << endl;
            break;

        case Yellow:
            cout << "Yellow is in the rainbow color" << endl;
            break;

        case Orange:
            cout << "Orange is in the rainbow color" << endl;
            break;

        case Red:
            cout << "Red is in the rainbow color" << endl;
            break;

        default:
            cout << "the color is not in the rainbow color!!" << endl;
            break;
    }

    return 0;
}

