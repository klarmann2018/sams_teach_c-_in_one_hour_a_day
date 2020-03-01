/*
 * =====================================================================================
 *
 *       Filename:  listing17_01.cpp
 *
 *    Description:  Different Forms of Instantiating std::vector: Specify Size,
 *    Initial Value and Copying Values from Another
 *
 *        Version:  1.0
 *        Created:  02/16/2020 04:44:16 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  bo lee
 *   Organization:  
 *
 * =====================================================================================
 */
#include<vector>

int main()
{
    std::vector<int> vecIntegers;

    // Instantiate a vector with 10 elements (it can grow larger)
    std::vector<int> vecWithTenElements(10);
    
    // Instantiate a vector with 10 elements, each initialized to 90
    std::vector<int> vecWithTenInitializedElements(10, 90);

    // Instantiate one vector and initialize it to the contents of another
    std::vector<int> vecArrayCopy(vecWithTenElements);

    // Using iterators instantiate vector to 5 elements from another
    std::vector<int> vecSomeElementsCopied(vecWithTenElements.cbegin(), vecWithTenElements.cbegin()+5);

    return 0;
}

