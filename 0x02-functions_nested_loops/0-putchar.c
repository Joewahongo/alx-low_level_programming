#include <stdio.h>

/**
 * main - Print alphabets in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 97; n <= 122; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
