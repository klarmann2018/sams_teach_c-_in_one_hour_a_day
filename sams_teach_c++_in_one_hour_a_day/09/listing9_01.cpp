/*
 * =====================================================================================
 *
 *       Filename:  listing9_01.cpp
 *
 *    Description:  A Compile Worthy Class Human
 *
 *        Version:  1.0
 *        Created:  2017年02月12日 14时23分46秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  bo lee
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
  string Name;
  int Age;

public:
  void SetName (string HumansName)
  {
    Name = HumansName;
  }

  void SetAge (int HumansAge)
  {
    if (HumansAge > 0)
      Age = HumansAge;
  }

  void IntroduceSelf ()
  {
    cout << "I am " + Name << " and am ";
    cout << Age << " years old " << endl;
  }
};

int main ()
{
    // Constructing an object of class Human with attribute Name as "Adam"
    Human FirstMan;
    FirstMan.SetName ("Adam");
    FirstMan.SetAge (30);
    
    // constructing an object of class Human with attribute Name as "Eve"
    Human FirstWoman;
    FirstWoman.SetName ("Eve");
    FirstWoman.SetAge (28);

    FirstMan.IntroduceSelf ();
    FirstWoman.IntroduceSelf ();

    Human Bo;
    Bo.SetName("lee Bo");
    Bo.IntroduceSelf();
}
