/*
 * =====================================================================================
 *
 * change mind, change world!
 *       Filename:  listing9_12.cpp
 *
 *    Description:  The Result of Using sizeof on Classes and Their
 *    Instances
 *
 *        Version:  1.0
 *        Created:  2017年03月01日 08时43分34秒
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
    MyString(const char* InitialInput) 
    {
        if (InitialInput != NULL) 
        {
            Buffer=new char [strlen(InitialInput) + 1];
            strcpy(Buffer, InitialInput);
        } 
        else
            Buffer=NULL;
    }

    MyString(const MyString& CopySource)
    {
        if (CopySource.Buffer != NULL) 
        {
            Buffer = new char [strlen(CopySource.Buffer) + 1];
            strcpy(Buffer, CopySource.Buffer);
        } 
        else
            Buffer = NULL;
    }

    ~MyString() 
    {
        if (Buffer != NULL) 
        {
            delete [] Buffer;
        }
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

class Human {
    private:
        int age;
        bool gender;
        MyString name;
    public:
        Human(const MyString& InputName, int Age, bool Gender):age(Age),gender(Gender),name(InputName) {}
        int getAge() {
            return age;
        }
};

int main() {
    MyString firstMan("Adam");
    MyString firstWoman("Eve");

    cout<< "sizeof(MyString)= " << sizeof(MyString)<< endl;
    cout<< "sizeof(firstMan)= " << sizeof(firstMan)<<endl;
    cout<< "sizeof(firstWoman)= " << sizeof(firstWoman)<<endl;

    Human firstMaleHuman(firstMan,25,true);
    Human firstFemaleHuman(firstWoman,18,false);

    cout<< "sizeof(Human)= " << sizeof(Human)<<endl;
    cout<< "sizeof(firstMaleHuman)= " << sizeof(firstMaleHuman)<<endl;
    cout<< "sizeof(firstFemaleHuman)= " << sizeof(firstFemaleHuman)<<endl;

    return 0;
}
