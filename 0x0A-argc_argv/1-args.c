#include "main.h"
#include <stdio.h>

/**
 * main - prints number of arguments passed into it
 * @argc: Number of arguments
 * @argv: Array containing the command argument
 *
 * Return: always (0)
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}

