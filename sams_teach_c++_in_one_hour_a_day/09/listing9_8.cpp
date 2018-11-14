/*
 * =====================================================================================
 *
 *       Filename:  listing9_8.cpp
 *
 *    Description:  passing objects of a class such as mystring by value; The
 *    Problem in Passing Objects of a Class Such as Mystring by Value
 *
 *        Version:  1.0
 *        Created:  2017年02月20日 13时16分54秒
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
    //constructor
    MyString (const char* InitialInput)
    {
        cout << "constructor : creating new MyString" << endl;
        if (InitialInput != NULL)
        {
            buffer = new char[strlen (InitialInput) + 1];
            strcpy (buffer, InitialInput);
        }
        else
            buffer = NULL;
    }

    // copy constructor
    MyString (const MyString& copySource)
    {
        cout << "Copy constructor: copying from Mystring" << endl;
        if (copySource.buffer != NULL)
        {
            buffer = new char[strlen (copySource.buffer) + 1];
            strcpy (buffer, copySource.buffer);
        }
        else
            buffer = NULL;

    }

    ~MyString ()
    {
        cout << "Invoking destructor, clearing up!" << endl;
        if (buffer != NULL)
        {
            delete [] buffer;
        }

    }

    int getLength ()
    {
        return strlen (buffer);
    }

    const char *getString ()
    {
        return buffer;
    }
};

void useMystring (MyString InitialInput)
{

    cout << "String buffer in MyString is " << InitialInput.getLength ()
         << " characters long" << endl;

    cout << "Buffer contains: " << InitialInput.getString () << endl;
    return;
}

int
main ()
{
    MyString sayhello ("Hello from String Class");
    
    // pass sayhello as a parameter to the function
    useMystring (sayhello);
    return 0;
}
