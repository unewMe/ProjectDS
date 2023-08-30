#ifndef PROJECTDS_COMPARATOR
#define PROJECTDS_COMPARATOR


template <typename T> class Comparator
{
public:
	Comparator() {};
	virtual int compare(T first, T second);
};
#include"Comparator.cpp"
#endif //PROJECTDS_MAIN_H
