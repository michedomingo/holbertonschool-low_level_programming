#include "holberton.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: char represented by integer
 * Return: 1 if letter, otherwise 0
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
