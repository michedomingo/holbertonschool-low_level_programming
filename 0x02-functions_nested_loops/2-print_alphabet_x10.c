#include "holberton.h"

/**
 * print_alphabet_x10 - prints lowercase alphabet ten times
 * Return: 0
 */

void print_alphabet_x10(void)
{
	char c;
	int i = 0;


	while (i < 10)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar ('\n');
		i++;
	}
}
