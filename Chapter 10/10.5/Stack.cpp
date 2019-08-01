#include "Stack.h"
#include <cstring>
#include <string>

Stack::Stack() 
{
	top = 0;
}

bool Stack ::isempty() const
{
	return top == 0;
}

bool Stack::isfull() const
{
	return top == MAX;
}

bool Stack::push(const Items &item)
{
	if (top < MAX) 
	{
		items[top++] = item;
		return true;
	}
	else
		return false;

}
bool Stack::pop(Items &item)
{
	if (top > 0)
	{
		item = items[--top];
		return true;
	}
	else
		return false;
}
