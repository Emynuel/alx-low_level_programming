#include "main.h"

/**
 * _puts - prints a string
 * @str: string
 * Return: Always 0
 */

void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}

