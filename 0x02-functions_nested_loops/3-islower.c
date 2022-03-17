#include "main.h"

/**
 * _islower - Short description, single line
 * @c: contains value to be compared
 * Return: 1 if int c is lowercase, 0 if otherwise
 *
 */

int _islower(int c)

{
	if (c >= 'a' && c <= 'z')

		return (1);
	else
		return (0);

}
