/*
 * =====================================================================================
 *
 *       Filename:  listing2_6.cpp
 *
 *    Description:  cin, string, integer
 *
 *        Version:  1.0
 *        Created:  09/09/2016 10:09:10 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author: Lee 
 *   Organization:  中豪庭
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <iostream>
using namespace std;
int
main ()
{
  // Declare a variable to store an integer
  int InputNumber;

  // store integer given user input
  cout << "Enter an integer: ";
  cin >> InputNumber;
  // The same with text i.e. string data 
  cout << "Enter your name: ";
  string Inputname;
  cin >> Inputname;

  cout << Inputname << " entered " << InputNumber << endl;

  return 0;


}
