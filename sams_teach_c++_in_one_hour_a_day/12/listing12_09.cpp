/*
 * =====================================================================================
 *
 *       Filename:  listing12_09.cpp
 *
 *    Description:  A Better class MyString from Listing9.9 with a Copy
 *    Assignment
 *
 *        Version:  1.0
 *        Created:  2017年11月02日 19时29分44秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Bo
 *   Organization:
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <iostream>
#include <cstring>
using namespace std;

class MyString
{
private:
    char* Buffer;

public:
    // constructor
    MyString(const char* InitialInput)
    {
        if(InitialInput != NULL)
        {
            Buffer=new char [strlen(InitialInput) + 1];
            strcpy(Buffer, InitialInput);
        }
        else
            Buffer = NULL;
    }

    // insert copy constructor from Listing 9.9
    MyString(const MyString& CopySource);

    // copy sssignment operator
    MyString& operator= (const MyString& CopySource)
    {
        if((this != &CopySource) && (CopySource.Buffer != NULL ))
        {
            if(Buffer != NULL)
                delete[] Buffer;

            // ensure deep copy by first allocating own buffer
            Buffer = new char [strlen(CopySource.Buffer) + 1 ];

            // copy from the source into local buffer
            strcpy(Buffer, CopySource.Buffer);

        }
        return *this;
    }

    // Destructor
    ~MyString() {
        if(Buffer !=NULL)
            delete [] Buffer;
    }

    int getLength() {
        return strlen(Buffer);
    }
    operator const char*() {
        return Buffer;
    }
};

int main() {
    MyString String1("Hello ");
    MyString String2(" World");

    cout << "Before assignment: " << endl;
    cout << String1 << String2 << endl;

    String2=String1;

    cout << "After assignment String2 = String1: " << endl;
    cout << String1 << String2 << endl;

    return 0;

}
