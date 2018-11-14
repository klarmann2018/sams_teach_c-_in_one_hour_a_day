/*
 * =====================================================================================
 *
 *       Filename:  listing9_09.cpp
 *
 *    Description:  Define a Copy Constructor to Ensure Deep Copy of Dynamically
 *    Allocated Buffers
 *
 *        Version:  1.0
 *        Created:  2018年10月17日 09时24分23秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  bo lee
 *   Organization:  
 *
 * =====================================================================================
 */
#include<iostream>
#include<cstring>
using namespace std;

class MyString
{
    private:
        char* Buffer;

    public:
        // constructor
        MyString(const char* InitialInput)
        {
            cout << "Constructor: creating new MyString" << endl;
            if(InitialInput != NULL)
            {
                Buffer = new char [strlen(InitialInput) + 1];
                strcpy(Buffer, InitialInput);

                // Display memory address pointed by local buffer
                cout << "Buffer points to: " << hex;
                cout << (unsigned int*)Buffer << endl;
            }
            else
                Buffer = NULL;
        }

        // Copy constructor
        MyString(const MyString& CopySource)
        {
            cout << "Copy constructor: copying from MyString" << endl;

            if(CopySource.Buffer != NULL)
            {
                // ensure deep copy by first allocating own buffer
                Buffer = new char [strlen(CopySource.Buffer) + 1];

                // copy from the source into local buffer
                strcpy(Buffer, CopySource.Buffer);

                // Display memory address pointed by local buffer
                cout << "Buffer points to: " << hex;
                cout << (unsigned int*)Buffer << endl;
            }
            else 
                Buffer = NULL;
        }

        // Destructor
        ~MyString()
        {
            cout << "Invoking destructor, cleaning up" << endl;
            if(Buffer != NULL)
                delete [] Buffer;
        }

        int GetLength()
        {
            return strlen(Buffer);
        }

        const char* GetString()
        {
            return Buffer;
        }
};

void UseMystring(MyString Input)
{
    cout << "String buffer in MyString is " << Input.GetLength();
    cout << " characters long" << endl;
    return;
}

int main()
{
    MyString SayHello("Hello From String Class");

    // Pass SayHello by value (will be copied)
    UseMystring(SayHello);

    return 0;
}
