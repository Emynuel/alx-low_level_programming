#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers
 * @a: input 1
 * @b: input 2
 * Return: integers
 */

void swap_int(int *a, int *b)
	{
		int z;

		z = *a;
		*a = *b;
		*b = z;
	}
