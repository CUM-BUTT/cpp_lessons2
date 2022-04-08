#include "Stack.h"
#include <iostream>

int Stack::get_count()
{
	return count;
}

int Stack::get_max_count()
{
	return max_count;
}

Stack::Stack(int max_count, string name)
{
	arr = new int[max_count];
	this->max_count = max_count;
	this->name = name;
}

void Stack::Push(int item)
{
	if (count < max_count)
	{
		arr[count] = item;
		count++;
		stack_overflow = false;
		push_succes = true;
	}
	else
	{
		stack_overflow = true;
		push_succes = false;
	}
}

int Stack::Pop()
{
	if (count > 0)
	{
		count--;
		pop_succes = true;
		return arr[count];
	}
	else
	{
		pop_succes = false;
		return -1;
	}
}

int Stack::Top()
{
	if (count > 0)
	{
		top_succes = true;
		return arr[count - 1];
	}
	else
	{
		top_succes = false;
		return -1;
	}
}

void Stack::Print()
{
	for (size_t i = 0; i < count; i++)
	{
		cout << arr[i] << '\t';
	}
	cout << endl;
}
