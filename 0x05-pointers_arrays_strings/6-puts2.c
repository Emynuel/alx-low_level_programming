#include "main.h"

/**
 * puts2 - a function that prints every character of a string
 * starting with the first one
 * @str: input
 * Return: void
 */

void puts2(char *str)
	{
		int e = 0;

		for (; str[e] != '\0'; e++)
		{
			if ((e % 2) == 0)
				_putchar(str[e]);
			else
				continue;
		}
		_putchar('\n');
	}
