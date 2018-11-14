/*
 * =====================================================================================
 *
 *       Filename:  ex_0802.cpp
 *
 *    Description:  What are the similarities and differences between these
 *    three overloaded functions:
 *                  int dosomething(int num1, int num2);
 *                  int dosomething(int& num1,int& num2);
 *                  int dosomething(int* pnum1,int* pnum2)
 *
 *        Version:  1.0
 *        Created:  2018年10月15日 12时04分26秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  bo lee
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>

      -- In the first overloaded variant, the arguments are copied to the called
        function. In the second, they're not copied as they're references to the
variables in the caller and the function can change them. The third variant uses
 pointers, which unlike references can be NULL or invalid, and validity needs to
                                                    be ensured in such a system.

