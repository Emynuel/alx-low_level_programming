#include "main.h"

/**
 * rev_string - a function that reverses a string
 * @s: input to reverse
 * Return: string in reverse
 */

void rev_string(char *s)
	{
		char rev = s[0];
		int fcounter = 0;
		int e;

		while (s[fcounter] != '\0')
			fcounter++;

		for (e = 0; e < fcounter; e++)
		{
			fcounter--;
			rev = s[e];
			s[e] = s[fcounter];
			s[fcounter] = rev;
		}
	}
