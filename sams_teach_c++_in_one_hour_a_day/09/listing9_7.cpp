/*
 * =====================================================================================
 *
 *       Filename:  listing9_7.cpp
 *
 *    Description:  c-style buffer to Ensure deallocation via the destructor ; A
 *    Simple Class That Encapsulates a C-style Buffer to Ensure Deallocation via
 *    the Distructor
 *
 *        Version:  1.0
 *        Created:  2017年02月19日 14时53分02秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  bo lee
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>
#include <cstring>
using namespace std;

class MyString
{
private:
  char *buffer;
public:

    MyString (const char *InitialInput)
  {
    if (InitialInput != NULL)
      {
          buffer = new char[strlen (InitialInput) + 1];
          strcpy (buffer, InitialInput);
      }
    else
        buffer = NULL;
  }

  ~MyString ()
  {
    cout << "Invoking destructor, clearing up!" << endl;
    if (buffer != NULL)
      delete [] buffer;
  }

  int getLength ()
  {
    return strlen (buffer);
  }

  char* getString ()
  {
    return buffer;
  }
};

int
main ()
{
  MyString sayhello ("Hello from String Class!");

  cout << "String buffer in MyString is " << sayhello.getLength ();
  cout << " characters long" << endl;
  cout << "buffer contains: " << sayhello.getString () << endl;

}
