#ifndef QUENOR_TPP
# define QUENOR_TPP 202408

/* **************************** [v] INCLUDES [v] **************************** */
#include "quenor.hpp" /*
#  class quenor;
#        */
#include "quenor_data.hpp" /*
#  class QUENOR_DATA;
#        */
#include <iostream> /*
#namespc std;
#        */
/* **************************** [^] INCLUDES [^] **************************** */

//Canonical Form

template <typename T>
quenor<T>::quenor(void)
{
	this->resetPointers();
}

template <typename T>
quenor<T>::quenor(const quenor<T>& copy)
{
	*this = copy;
}

template <typename T>
quenor<T>::~quenor()
{
	this->clear();
}

//operator overload

template <typename T>
quenor<T>&
	quenor<T>::operator=(const quenor<T>& other)
{
	if (this != &other)
	{
		this->clear();
		for (unsigned int idx = 0; idx < other.size(); idx++)
		{
			push_back(other[idx]);
		}
	}
	return (*this);
}

template <typename T>
T
	quenor<T>::operator[](unsigned int idx)//göz at
{
	if (idx >= this->_size)
	{
		throw std::out_of_range("Index out of range");
	}
	QUENOR_DATA<T> *tmp = __BEGIN__;
	for (unsigned int i = 0; i < idx; i++)
	{
		tmp = tmp->getNext();
	}
	return (tmp->getData());
}


//member function

template <typename T>
void
	quenor<T>::resetPointers()
{
	this->__BEGIN__ = NULL;//((class QUENOR_DATA *)0);
	this->__END__ = NULL;//((class QUENOR_DATA *)0);
	this->__CURRENT__ = NULL; //((class QUENOR_DATA *)0);
}

template <typename T>
void
	quenor<T>::clear()
{
	while (__BEGIN__ != NULL)
	{
		QUENOR_DATA<T> *tmp = __BEGIN__;
		__BEGIN__ = __BEGIN__->getNext();
		delete tmp;
	}
	this->resetPointers();
}

template <typename T>
T
	quenor<T>::at(unsigned int idx)
{
	if (idx >= this->_size)
	{
		throw std::out_of_range("Index out of range");
	}
	QUENOR_DATA<T> *tmp = __BEGIN__;
	for (unsigned int i = 0; i < idx; i++)
	{
		tmp = tmp->getNext();
	}
	return (tmp->getData());
}

template <typename T>
void
	quenor<T>::push_back(T newdata)
{
	QUENOR_DATA<T> *newq = new QUENOR_DATA<T>(newdata);
	if (__BEGIN__ == NULL)
	{
		__BEGIN__ = newq;
		__END__ = newq;
		__CURRENT__ = newq;
	}
	else
	{
		__END__->setNext(newq);
		__END__ = newq;
	}
	this->_size++;
}

template <typename T>
void
	quenor<T>::erase(unsigned int idx)
{
	if (idx >= this->_size)
	{
		throw std::out_of_range("Index out of range");
	}
	if (idx == 0)
	{
		QUENOR_DATA<T> *tmp = __BEGIN__;
		__BEGIN__ = __BEGIN__->getNext();
		delete tmp;
	}
	else
	{
		__CURRENT__ = __BEGIN__;
		for (unsigned int i = 0; i < idx - 1; i++)
		{
			__CURRENT__ = __CURRENT__->getNext();
		}
		QUENOR_DATA<T> *tmp = __CURRENT__->getNext();
		__CURRENT__->setNext(tmp->getNext());
		delete tmp;
	}
	this->_size--;
}


#endif /* QUENOR_TPP */