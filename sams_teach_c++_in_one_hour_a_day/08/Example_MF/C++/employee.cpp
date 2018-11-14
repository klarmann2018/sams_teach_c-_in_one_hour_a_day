/*
 * =====================================================================================
 *
 *       Filename:  employee.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2018年10月13日 09时40分12秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include"employee.h"
employee::employee(string s, int n)
{
    name = s;
    num = n;
}

int employee::getnum()
{
    return num + 1;
}

