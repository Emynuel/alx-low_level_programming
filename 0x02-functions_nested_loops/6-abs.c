#include "main.h"

/**
 * _abs - a function that prints the absolute value of a integer
 * @ab: integer input
 * Return: absolute value of ab
 *
 */

int _abs(int ab)
{
	return (ab * ((ab > 0) - (ab < 0)));
}
