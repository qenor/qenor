#ifndef QENOR_DATA_HPP
#define QENOR_DATA_HPP	202408

/* **************************** [v] INCLUDES [v] **************************** */
# include <iostream> /*
# namespc std;
#         */
/* **************************** [^] INCLUDES [^] **************************** */
/* ***************************** [V] USING [V] ****************************** */
/* ***************************** [^] USING [^] ****************************** */

template <typename T>
class QENOR_DATA
{
public:
//Canonical Form
    QENOR_DATA(T _data_);
    ~QENOR_DATA();
//Getters
	T						getData() const;
	class QENOR_DATA*		getNext() const;
//Setters
	void					setData(T _data_);
	void					setNext(QENOR_DATA* _next_);

private:
    T						__DATA__;
    class QENOR_DATA*		__NEXT__;
};

#include "qenor_data.tpp"

#endif /* QENOR_DATA_HPP */