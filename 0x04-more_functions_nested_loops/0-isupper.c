#include "main.h"

/**
 * _isupper - check for uppercase characters
 * @c: ASCII integer
 * Return: 1 if c is uppercase, otherwise 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
		return (0);
}
