#include "main.h"

/**
 * prime2 - makes possible to evaluate from 1 to n
 * @a: same number as n
 * @b: number that integrates fom 1 to n
 *
 * Return: On success 1
 * On error, -1 is returned and errno is set appropriately
 */

int prime2(int a, int b)
{
	if (a == b)
		return (1);
	else if (a % b == 0)
		return (-1);
	return (prime2(a, b + 1));
}

/**
 * is_prime_number - checks if a number is a prime number
 * @n: integer number
 *
 * Return: On success 1
 * On error, -1 is returned and errno set appropriately
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime2(n, 2));
}

