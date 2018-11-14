/*
 * =====================================================================================
 *
 *       Filename:  listing12_04.cpp
 *
 *    Description:  Implementing operator(*) and operator(->) in a sample smart
 *    pointer class
 *
 *        Version:  1.0
 *        Created:  2017年03月16日 18时57分39秒
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

template <typename T>

class smart_pointer {
private:
    T* m_pRawPointer;
public:
    smart_pointer(T* pData):m_pRawPointer(pData) {}
    ~smart_pointer() {
        delete m_pRawPointer;
    }

    T& operator * ()const {
        return *(m_pRawPointer);
    }
    T* operator -> ()const {
        return m_pRawPointer;
    }
};

class Date {
private:
    int Day, Month, Year;
    string DateInString;
public:
    Date(int InputDay, int InputMonth, int InputYear):Day(InputDay),Month(InputMonth),Year(InputYear) {}
    void displayDate() {
        cout<<Day<<"/"<<Month<<"/"<<Year<<endl;
    }
};
int main() {
    smart_pointer<int> pDynamicInt(new int(42));
    cout<<"Dynamically allocated integer value = " << *pDynamicInt;
    cout<<endl;

    smart_pointer<Date> pData(new Date(25,12,2011));
    cout<<"Date is = ";
    pData->displayDate();

    return 0;
}

