#include "TypeOne.h"
#include "TypeTwo.h"

TypeOne::TypeOne(int value)
{
	this->value = value;
}

int FindMax(TypeOne* one, TypeTwo* two)
{
	return max(one->value, max(two->value_1, two->value_2));
}
