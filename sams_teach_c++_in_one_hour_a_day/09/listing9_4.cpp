/*
 * =====================================================================================
 *
 *       Filename:  listing9_4.cpp
 *
 *    Description:  three constructors for class Human; A Class Human with
 *    Multiple Constructors
 *
 *        Version:  1.0
 *        Created:  2017年02月14日 18时41分28秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author: Bo Lee
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>
#include <string>
using namespace std;

class Human
{

private:
  string name;
  int age;
public:
  // constructor
    Human ()
  {
    age = 0; // initialized to ensure no junk value
    cout << "Default constructor creates an instant of Human" << endl;
  }
    
    //overloaded constructor that take name
  Human (string HumanName)
  {
    name = HumanName;
    age = 0; // initialized to ensure no junk value 
    cout << "Overloaded constructor creates " << name << endl;
  }
  
    //overloaded constructor that take name and age
  Human (string HumanName, int HumanAge)
  {
    name = HumanName;
    age = HumanAge;
    cout << "Overloaded constructor creates ";
    cout << name << " of " << age << " years." << endl;
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
    cout << " I am " << name << " and am " << age << " years old" << endl;

  }
};

int
main ()
{

  Human firstHuman;
  firstHuman.setName ("adam");
  firstHuman.setAge (30);
  firstHuman.introduceSelf ();

  Human secondHuman ("eva");
  secondHuman.setAge (22);
  secondHuman.introduceSelf ();

  Human thirdHuman ("bo lee", 38);
  thirdHuman.introduceSelf ();

}
