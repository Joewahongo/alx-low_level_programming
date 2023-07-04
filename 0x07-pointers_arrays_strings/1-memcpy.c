#include "main.h"

/**
 * _memcpy - a function that  copies memory area
 * @n: number of bytes
 * @src: memory area where is stored
 * @dest: memory area where is copied
 *
 * Return: copied memory with n byted changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n++;
	}
	return (dest);
}
