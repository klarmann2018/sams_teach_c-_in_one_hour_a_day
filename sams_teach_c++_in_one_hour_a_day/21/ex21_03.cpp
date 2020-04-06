/*
 * =====================================================================================
 *
 *       Filename:  ex21_03.cpp
 *
 *    Description:  Write a binary predicate that helps sort in ascending order.
 *
 *        Version:  1.0
 *        Created:  2020年03月28日 21时54分17秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  bo lee
 *   Organization:  
 *
 * =====================================================================================
 */


template<typename T>
struct Predicate
{
    bool operator()(const T& lrs, const T& rrs ) const 
    {return (lrs<rrs);}
};
