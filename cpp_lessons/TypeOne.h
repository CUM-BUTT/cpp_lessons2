#pragma once
//#include "TypeTwo.h"
#include <algorithm>
using namespace std;

class TypeOne
{
	int value;
public:
	friend int FindMax(class TypeOne*, class TypeTwo*);
	TypeOne(int value);
};
//
//class TypeTwo
//{
//	int value_1, value_2;
//public:
//	friend int FindMax(class TypeOne*, class TypeTwo*);
//	TypeTwo(int value1, int value2);
//};
