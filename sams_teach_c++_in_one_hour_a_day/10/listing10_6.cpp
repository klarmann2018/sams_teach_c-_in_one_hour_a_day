/*
 * =====================================================================================
 *
 *       Filename:  listing10_6.cpp
 *
 *    Description:  hides overloaded Method Fish::swim(bool)
 *
 *        Version:  1.0
 *        Created:  2017年03月06日 13时30分52秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  bo lee
 *   Organization:  
 *
 * =====================================================================================
 */
#include<iostream>
using namespace std;

class Fish{
    public:
       void  swim(){
           cout << "Fish swims ... !" <<endl;
        }
       void swim(bool isFreshWaterFish){
      if(isFreshWaterFish)
      {
     cout << "swims in lake"<<endl;
      }else{
          cout<<"swims in see"<<endl;
      } 
       
       }

};

class Tuna:public Fish{
    public:
        //using Fish::swim;

        void swim(){
           cout<<"Tuna swims real fast"<<endl; 
        }

};

int main(){

    Tuna myDinner;
    cout <<"Getting my food to swim"<<endl;

    myDinner.Fish::swim();
    myDinner.swim();
    
// unhiding swim(bool) 在 tuna 里 添加 using Fish::swim;
    myDinner.Fish::swim(true);

return 0;
}
