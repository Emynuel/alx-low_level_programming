#include "main.h"

/**
 * _puts - a function that prints a string
 * @str: string input
 * Return: string
 */

void _puts(char *str)
	{
		int u;

		for (u = 0; str[u] != '\0'; u++)
		{
			_putchar(str[u]);
		}
		_putchar('\n');
	}
