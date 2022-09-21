#include "main.h"

/**
 * _strcat - a function that concatenates two strings
 * @dest: parameter pointer to a char
 * @src: parameter pointer to a char
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, c = 0, n = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[c] != '\0')
	{
		c++;
	}
	while (n <= c)
	{
		dest[i] = src[j];
		n++;
		i++;
	}
	return (dest);
}

