#include"Comparator.h"
class IntegerComparator : public Comparator<int>
{
public:
	IntegerComparator() {};
	int compare(int first, int second)
	{
		return first - second;
	};
};