#include "main.h"

/**
 * _isalpha - check the code for Holberton School Students
 * @c: An integer argument
 * Return: Always 0
 */

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}

