/* **************************** [v] INCLUDES [v] **************************** */
#include "qenor_data.hpp" /*
#  class QENOR_DATA;
#        */
#include <iostream> /*
#namespc std;
#         */
/* **************************** [^] INCLUDES [^] **************************** */

/* ***************************** [V] USING [V] ****************************** */
/* ***************************** [^] USING [^] ****************************** */


//Canonical Form

template <typename T>
QENOR_DATA<T>::QENOR_DATA(T _data_): __DATA__(_data_), __NEXT__(((class QENOR_DATA *)0))
{
}

template <typename T>
QENOR_DATA<T>::~QENOR_DATA()
{
}

//Getters

template <typename T>
T
    QENOR_DATA<T>::getData() const
{
    return __DATA__;
}

template <typename T>
class QENOR_DATA<T>*
    QENOR_DATA<T>::getNext() const
{
    return __NEXT__;
}

//Setters

template <typename T>
void
    QENOR_DATA<T>::setData(T _data_)
{
    this->__DATA__ = _data_;
}

template <typename T>
void
    QENOR_DATA<T>::setNext(QENOR_DATA* _next_)
{
    this->__NEXT__ = _next_;
}