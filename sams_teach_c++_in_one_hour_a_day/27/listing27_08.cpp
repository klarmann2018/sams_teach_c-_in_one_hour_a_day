/*
 * =====================================================================================
 *
 *       Filename:  listing27_08.cpp
 *
 *    Description:  Creating a New Text File and Writing Text into It Using
 *    ofstream
 *
 *        Version:  1.0
 *        Created:  03/17/2020 06:57:37 PM
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
using namespace std;

int main()
{
    ofstream myFile;
    myFile.open("HelloFile.txt", ios_base::out);

    if(myFile.is_open())
    {
        cout << "File open successful" << endl;

        myFile << "My first text file!" << endl;
        myFile << "Hello file!";
        myFile << endl;

        cout << "Finished writing to file, will close now" << endl;
        myFile.close();
    }

    return 0;
}

