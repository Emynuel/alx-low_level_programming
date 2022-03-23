#include "main.h"

/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int e = 0;

	for (; src[e] != '\0'; e++)
	{
		dest[e] = src[e];
	}
	return (dest);
}
