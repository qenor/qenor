#ifndef QUENOR_HPP
# define QUENOR_HPP 202408

/* **************************** [v] INCLUDES [v] **************************** */
# include "quenor_data.hpp" /*
#   class QUENOR_DATA;
#         */
# include <iostream> /*
# namespc std;
#         */
/* **************************** [^] INCLUDES [^] **************************** */

template <typename T>
class quenor
{
public:
//Canonical Form
	quenor();
	quenor(const quenor<T>&);
	~quenor(void);
//operator overload
	quenor<T>&	operator=(const quenor<T>&);
	T			operator[](unsigned int);
//member function
	void		resetPointers();
	void		clear();
	T			at(unsigned int);
	void		push_back(T);
	void		erase(unsigned int);
//getters
	//QUENOR_DATA<T> *get(void);
	// { return quenor_data; }
	//void	push_front(const T);
	//T 		top(void);
	//T 		pop(void);
	
	
	// push_front(const T&);
	// operator[]()
private:
	QUENOR_DATA<T>	*__BEGIN__;
	QUENOR_DATA<T>	*__END__;
	QUENOR_DATA<T>	*__CURRENT__;
	
	unsigned int	_size;
};
#include "quenor.tpp"
#endif