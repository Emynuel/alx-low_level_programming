#include <stdio.h>
#include "main.h"

/**
 * print_array - a function that prints n elements of an array
 * @a: array name
 * @n: number of elements to be printed
 * Return: void
 */

void print_array(int *a, int n)
	{
		int e;

		for (e = 0; e < (n - 1); e++)
			printf("%d, ", a[e]);
		if (e == (n - 1))
			printf("%d, ", a[n - 1]);
		printf("\n");
	}
