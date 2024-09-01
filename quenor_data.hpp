#ifndef QUENOR_DATA_HPP
# define QUENOR_DATA_HPP	202408

/* **************************** [v] INCLUDES [v] **************************** */
# include <iostream> /*
# namespc std;
#         */
/* **************************** [^] INCLUDES [^] **************************** */
/* ***************************** [V] USING [V] ****************************** */
/* ***************************** [^] USING [^] ****************************** */

template <typename T>
class QUENOR_DATA
{
public:
//Canonical Form
    QUENOR_DATA(T _data_);
    ~QUENOR_DATA();
//Getters
	T						getData() const;
	class QUENOR_DATA*		getNext() const;
//Setters
	void					setData(T _data_);
	void					setNext(QUENOR_DATA* _next_);

private:
    T						__DATA__;
    class QUENOR_DATA*		__NEXT__;
};

#include "quenor_data.tpp"

#endif /* QUENOR_DATA_HPP */