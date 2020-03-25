/*
 * =====================================================================================
 *
 *       Filename:  ex17_03.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2020年03月22日 20时04分47秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author: bo lee
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> dimensionVector;
    cout << "Jack please input the dimension:" << endl;
    int inputDimension=0;
    cin >> inputDimension;
    dimensionVector.push_back(inputDimension);

    cout << "display the contents in vector:" << endl;

    for(auto iElement=dimensionVector.cbegin()
            ; iElement != dimensionVector.cend()
            ; ++ iElement)
        cout << * iElement <<endl;

    return 0;
}
