#pragma once
#include <string>
using namespace std;

class Stack
{
	int *arr;
	int count;
	int max_count;
public:
	string name;
	bool pop_succes, 
		stack_overflow = false, 
		push_succes, 
		top_succes;

	int get_count();
	int get_max_count();
	Stack(int max_count, string name);
	void Push(int item);
	int Pop();
	int Top();
	void Print();
};

