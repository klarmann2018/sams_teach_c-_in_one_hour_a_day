/*
 * =====================================================================================
 *
 *       Filename:  employee.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2018年10月13日 09时37分50秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include<string>
using std::string;
class employee
{
    public:
        employee(string, int);
        int getnum();
    private:
        string name;
        int num;
};
