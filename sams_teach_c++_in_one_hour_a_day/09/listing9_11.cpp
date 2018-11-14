/*
 * =====================================================================================
 *
 *       Filename:  listing9_11.cpp
 *
 *    Description:  A Database class MonsterDB That Allows Object
 *    Creation Only on the Free Store(Using new)
 *
 *        Version:  1.0
 *        Created:  2017年02月28日 21时23分44秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  bo lee
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <iostream>
using namespace std;

class MonsterDB{
    private:
        ~MonsterDB(){}; // private destructor
    public:
        static void DestroyInstance(MonsterDB* pInstance)
        {
            // static member can access private destructor
            delete pInstance; 
        }
        void printSelf()
        {
            cout << "printSelf\n" << endl;
        }
};

int main()
{
    MonsterDB* pMyDatabase = new MonsterDB();

    pMyDatabase->printSelf();

//    delete pMyDatabase;
// 3  [delete pMyDatabase] 
// today have i ein Gerat kaufen. Bo lee have aufstehen.

    MonsterDB::DestroyInstance(pMyDatabase);

    return 0;
}
