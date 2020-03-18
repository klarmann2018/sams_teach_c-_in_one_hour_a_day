/*
 * =====================================================================================
 *
 *       Filename:  listing26_01.cpp
 *
 *    Description:  The Minimal Essential Components of a Smart Pointer Class
 *
 *        Version:  1.0
 *        Created:  03/15/2020 07:55:05 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  bo lee
 *   Organization:  
 *
 * =====================================================================================
 */
template <typename T>
class smart_pointer
{
    private:
        T* m_pRawPointer;
    public:
        smart_pointer(T* pData) : m_pRawPointer(pData){}    // constructor
        ~smart_pointer(){delete m_pRawPointer;}     // destructor

        // copy constructor
        smart_pointer(const smart_pointer & anotherSP);
        // copy assignment operator
        smart_pointer& operator=(const smart_pointer& anotherSP);

        T& operator* () const       // dereferencing operator
        {
            return *(m_pRawPointer);
        }

        T* operator->() const       // member selection operator
        {
            return m_pRawPointer;
        }

};
