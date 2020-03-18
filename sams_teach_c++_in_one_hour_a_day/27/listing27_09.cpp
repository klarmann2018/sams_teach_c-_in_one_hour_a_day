/*
 * =====================================================================================
 *
 *       Filename:  listing27_09.cpp
 *
 *    Description:  Reading Text from File HelloFile.txt Created in Listing 27.8
 *
 *        Version:  1.0
 *        Created:  03/17/2020 07:06:30 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  bo lee
 *   Organization:  
 *
 * =====================================================================================
 */
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    ifstream myFile;
    myFile.open("HelloFile.txt", ios_base::in);

    if(myFile.is_open())
    {
        cout << "File open successful. It contains: " << endl;
        string fileContents;

        while(myFile.good())
        {
            getline(myFile, fileContents);
            cout << fileContents << endl;
        }

        cout << "Finished reading file, will close now" << endl;
        myFile.close();
    }
    else 
        cout << "open() failed: check if file is in right folder" << endl;

    return 0;
}

