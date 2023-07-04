#include "main.h"

/**
 * _strspn - the length of a prefix substring
 * @s: initial segments
 * @accept: input
 *
 * Returns: 0 Always
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int r;

	while (*s)
	{
		for (r = 0; accept[r]; r++)
		{
			if (accept[r] == *s)
			{
				n++;
				break;
			}
			else if (accept[r + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}

