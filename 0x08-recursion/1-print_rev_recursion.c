#include "holberton.h"

/**
 * _print_rev_recursion - print string in reverse
 * @s: pointer to string to reverse
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
