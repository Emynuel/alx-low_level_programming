#include "main.h"

/**
 * _strpbck - search a string for any set of bytes
 * @s: source string
 * @accept: accepted character
 * Return: the string found with accepted characters
 */

char *_strpbck(char *s, char *accept)
{
	int a = 0, b;

	while (s[a])
	{
		b = 0;

		while (accept[b])
		{
			if (s[a] == accept[b])
			{
				s += a;
				return (s);
			}
			b++;
		}
		a++;
	}
	return ('\0');
}

