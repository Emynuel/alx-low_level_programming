#include "main.h"

/**
 * _isdigit - checks if an int is a char digit
 * @c: int to check if char is digit
 * Return: 0 if not digit, 1 if digit
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

