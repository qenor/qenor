#ifndef QUENOR_DATA_TPP
# define QUENOR_DATA_TPP 202408

/* **************************** [v] INCLUDES [v] **************************** */
#include "quenor_data.hpp" /*
#  class QUENOR_DATA;
#        */
#include <iostream> /*
#namespc std;
#         */
/* **************************** [^] INCLUDES [^] **************************** */

/* ***************************** [V] USING [V] ****************************** */
/* ***************************** [^] USING [^] ****************************** */


//Canonical Form

template <typename T>
QUENOR_DATA<T>::QUENOR_DATA(T _data_): __DATA__(_data_), __NEXT__(((class QUENOR_DATA *)0))
{
}

template <typename T>
QUENOR_DATA<T>::~QUENOR_DATA()
{
}

//Getters

template <typename T>
T
    QUENOR_DATA<T>::getData() const
{
    return __DATA__;
}

template <typename T>
class QUENOR_DATA<T>*
    QUENOR_DATA<T>::getNext() const
{
    return __NEXT__;
}

//Setters

template <typename T>
void
    QUENOR_DATA<T>::setData(T _data_)
{
    this->__DATA__ = _data_;
}

template <typename T>
void
    QUENOR_DATA<T>::setNext(QUENOR_DATA* _next_)
{
    this->__NEXT__ = _next_;
}

#endif