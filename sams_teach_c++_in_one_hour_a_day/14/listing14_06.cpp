/*
 * =====================================================================================
 *
 *       Filename:  listing14_06.cpp
 *
 *    Description:  A Finicky Template Class That Protests Using static_assert
 *    When Instantiated for Type int
 *
 *        Version:  1.0
 *        Created:  02/03/2020 07:31:55 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  bo lee
 *   Organization:  
 *
 * =====================================================================================
 */

template<typename T>
class EverythingButInt
{
    public:
        EverythingButInt()
        {
            static_assert(sizeof(T) != sizeof(int), "No int please!");
        };
};

int main()
{
    //EverythingButInt<int> test; //template instantiation with int.
    EverythingButInt<double> test; //template instantiation with int.

    return 0;
}
