#include "main.h"

/**
 * *rot13 - a function that encodes a string using rot13
 * @s: pointer pointed to the variable s, of type char
 * Return: pointer P, pointed to the variable s of type char
 * Update V2.0: using pointers instead of arrays to maximize use
 * of allocated memory and to improve the esthetics and simplicity of code.
 */
char *rot13(char *s)
{
	int i;
	char *p = s;

	char *original = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *code = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (*s != '\0')
	{
		i = 0;
		while (i < 53)
		{
			if (*s == original[i])
			{
				*s = code[i];
				break;
			}
			i++;
		}
		s++;
	}
	return (p);
}

