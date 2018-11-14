/*
 * =====================================================================================
 *
 *       Filename:  listing9_10.cpp
 *
 *    Description:  Singleton class President That Prohibits Copying,
 *    Assignment and Multiple Instance Creation
 *
 *        Version:  1.0
 *        Created:  2018年10月17日 22时18分13秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  bo lee
 *   Organization:  
 *
 * =====================================================================================
 */
#include<iostream>
#include<string>
using namespace std;

class President
{
    private:
        // private default constructor (prohibits creation from outside)
        President() {};

        // private copy constructor (prohibits copy creation)
        President(const President&);
        
        // private assignment operator (prohibits assignment)
        const President& operator=(const President&);

        // member data: Presidents name
        string Name;

    public:
        // controlled instantiation
        static President& GetInstance()
        {
            // static objects are constructed only once
            static President OnlyInstance;

            return OnlyInstance;
        }

        // public methods
        string GetName()
        {
            return Name;
        }

        void SetName(string InputName)
        {
            Name = InputName;
        }
};

int main()
{
    President& OnlyPresident = President::GetInstance();
    OnlyPresident.SetName("Abraham Lincoln");
// uncomment lines to see how compile failures prohibit duplicates 
// President Second; // cannot access constructor
// President* Third = new President(); // cannot access constructor
// President Fourth = OnlyPresident; // cannot access copy constructor
// OnlyPresident = President::GetInstance(); // cannot access operator=

    cout << "The name of the President is: ";
    cout << President::GetInstance().GetName() << endl;
    
    return 0;
}
