#include "main.h"

/**
 * print_numbers - a function thag print the numbers 0 to 9
 * followed by a new line
 */

void print_numbers(void)
{
	int a = 48;


	while (a < 58)
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
