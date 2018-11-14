/*
 * =====================================================================================
 *
 *       Filename:  listing9_5.cpp
 *
 *    Description:  constructor with initialization list; A Class with
 *    Overloaded Constructor(s) and No Default Constructor
 *
 *        Version:  1.0
 *        Created:  2017年02月17日 18时41分39秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  bo lee
 *   Organization:  
 *
 * =====================================================================================
 */
#include<iostream>
#include<string>
using namespace std;

class Human
{
private:
  string name;
  int age;

public:
    Human (string HumanName, int HumanAge):name (HumanName), age (HumanAge)
  {
    cout << "constructor a human called " << name
      << ", " << age << " years old" << endl;
  }


};
int
main ()
{
    //Human firstman;
    
  Human man ("bo lee", 40);

}
