/*
 * =====================================================================================
 *
 *       Filename:  listing9_07.cpp
 *
 *    Description:  c-style Buffer to Ensure deallocation via the destructor ; A
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
        char* Buffer;
    public:
        // Constructor
        MyString (const char* InitialInput)
        {
            if (InitialInput != NULL)
            {
                Buffer = new char[strlen (InitialInput) + 1];
                strcpy (Buffer, InitialInput);
            }
            else
                Buffer = NULL;
        }

        // Destructor: clears the Buffer allocated in constructor
        ~MyString ()
        {
            cout << "Invoking destructor, clearing up!" << endl;
            if (Buffer != NULL)
                delete [] Buffer;
        }

        int GetLength ()
        {
            return strlen(Buffer);
        }

        char* GetString ()
        {
            return Buffer;
        }
};

int main ()
{
    MyString sayhello ("Hello from String Class!");

    cout << "String Buffer in MyString is " << sayhello.GetLength ();
    cout << " characters long" << endl;
    cout << "Buffer contains: " << sayhello.GetString () << endl;

}
