#pragma once
class TypeTwo
{
	int value_1, value_2;
	friend int FindMax(class TypeOne*, class TypeTwo*);
public:
	TypeTwo(int value1, int value2);
};

int FindMax(TypeOne*, TypeTwo*);