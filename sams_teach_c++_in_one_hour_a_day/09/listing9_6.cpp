/*
 * =====================================================================================
 *
 *       Filename:  listing9_6.cpp
 *
 *    Description:  Default Constructors That Accepts Parameters with Default Values to
 *    Set Members Using Initialization Lists
 *
 *        Version:  1.0
 *        Created:  2017年02月17日 18时55分53秒
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
  Human (string HumanName = "Adam", int HumanAge = 30):name (HumanName),
    age (HumanAge)
  {
    cout << " constructor a human called " << name << ", " << age <<
      " years old" << endl;
    cout << endl;
  }

};

int
main ()
{
  Human bo;
  Human lee ("lee", 40);

}
