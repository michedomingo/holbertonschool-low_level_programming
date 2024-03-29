#include "function_pointers.h"

/**
 * print_name - function that prints a name
 * @name: pointer to char string
 * @f: pointer to fuction
 * Description - write a function that prints a name
 */

void print_name(char *name, void (*f)(char *))
{
	if (*f == NULL)
	{
		return;
	}
	f(name);
}
