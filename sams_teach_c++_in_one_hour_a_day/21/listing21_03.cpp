/*
 * =====================================================================================
 *
 *       Filename:  listing21_03.cpp
 *
 *    Description:  A Unary Predicate That Determines Whether a Number Is a
 *    Multiple of Another
 *
 *        Version:  1.0
 *        Created:  03/07/2020 09:25:55 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  bo lee
 *   Organization:  
 *
 * =====================================================================================
 */
// A structure as a unary predicate 
template<typename numberType>
struct IsMultiple
{
    numberType Divisor;

    IsMultiple(const numberType& divisor)
    {
        Divisor = divisor;
    }

    bool operator()(const numberType& element) const
    {
        // Check if the divisor is a multiple of the divisor
        return ((element % Divisor) == 0);
    }
};
