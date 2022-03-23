#include "main.h"

/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int e;

	e = 0;

	while (src[e] != '\0')
	{
		dest[e] = src[e];
		e++;
	}
	dest[e] != '\0';

	return (dest);
}
