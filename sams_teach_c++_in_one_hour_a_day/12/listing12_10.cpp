/*
 * =====================================================================================
 *
 *       Filename:  listing12_10.cpp
 *
 *    Description:  Implementing Subscript Operator [] in class MyString to
 *    Allow Random Access to Characters Contained in MyString::Buffer
 *
 *        Version:  1.0
 *        Created:  2017年11月24日 07时19分27秒
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

    // private default constructor
    MyString() {}

public:
    // constructor
    MyString(const char* InitialInput)
    {
        if(InitialInput != NULL) {
            Buffer = new char[strlen(InitialInput)+1];
            strcpy(Buffer, InitialInput);
        }
        else
            Buffer=NULL;

    }
    // Copy constructor: insert from Listing 9.9 here
    MyString(const MyString& CopySource);
    // Copy assignment operator: insert from Listing 12.9 here
    MyString& operator=(const MyString& CopySource);

    const char& operator[] (int Index) const
    {
        if(Index < GetLength())
            return Buffer[Index];
    }

    // Destructor
    ~MyString()
    {
        if(Buffer != NULL)
            delete [] Buffer;
    }
    int GetLength() const
    {
        return strlen(Buffer);
    }
    operator const char*()
    {
        return Buffer;
    }
};

int main() {
    cout << "Type a statement: ";
    string strInput;
    getline(cin, strInput);

    MyString youSaid(strInput.c_str());

    cout << "Using operator[] for displaying your input: " << endl;
    for(int Index =0; Index < youSaid.GetLength(); ++Index)
        cout<< youSaid[Index] << "  ";
    cout << endl;

    cout << "Enter index 0 - " << youSaid.GetLength()-1 << ": ";
    int InIndex=0;
    cin >> InIndex;
    cout << "Input character at zero-based position: " << InIndex;
    cout << " is: " << youSaid[InIndex]<< endl;

    return 0;

}
