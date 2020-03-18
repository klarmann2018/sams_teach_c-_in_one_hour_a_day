/*
 * =====================================================================================
 *
 *       Filename:  listing26_02.cpp
 *
 *    Description:  Using a Deep-Copy-Based Smart Pointer to Pass Polymorphic
 *    Objects by Their Base Types
 *
 *        Version:  1.0
 *        Created:  03/15/2020 08:37:30 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  bo lee
 *   Organization:  
 *
 * =====================================================================================
 */
template <typename T>
class deepcopy_smart_pointer
{
    private:
        T* m_pObject;
    public:
        //... other functions
        
        // copy constructor of the deepcopy pointer
        deepcopy_smart_pointer(const deepcopy_smart_pointer& source)
        {
            // Clone() is virtual: ensures deep copy of Derived class object
            m_pObject = source->Clone();
        }
        
        // copy assignment operator
        deepcopy_smart_pointer& operator= (const deepcopy_smart_pointer& source)
        {
            if(m_pObject)
                delete m_pObject;

            m_pObject = source->Clone();
        }

};
