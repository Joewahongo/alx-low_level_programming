#include <stdio.h>
#include <ctype.h>
/**
 * main - printing alphabets in lower cases
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 122;

	while (n >= 97)
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}