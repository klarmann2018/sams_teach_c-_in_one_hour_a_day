/*
 * =====================================================================================
 *
 *       Filename:  listing9_3.cpp
 *
 *    Description:  constructor Using Constructors to Initialize Class Member
 *    Variables
 *
 *        Version:  1.0
 *        Created:  2017年02月14日 09时31分53秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  bo lee
 *   Organization:  
 *
 * =====================================================================================
 */
#include<iostream>
using namespace std;

class Human
{
private:
  int age;
  string name;
public:
  Human ()
  {
    age = 0;
    cout << "Constructed an instance of class Human" << endl;
  }

  void setName (string HumanName)
  {
    name = HumanName;
  }

  void setAge (int HumanAge)
  {
    age = HumanAge;
  }

  void introduceSelf ()
  {
    cout << "I am " + name << endl;
    cout << "I am " << age << " years old. " << endl;
  }

};

int
main ()
{
  Human adam;
  adam.setName ("adam");
  adam.setAge (33);

  Human eva;
  eva.setName ("eva");
  eva.setAge (22);

  adam.introduceSelf ();
  eva.introduceSelf ();
}
