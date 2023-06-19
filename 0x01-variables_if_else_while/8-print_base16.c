#include <stdio.h>
/**
 * main - printing hexadecimal base values
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int m;
	int k;

	for (m = 48; m <= 57; m++)
	{
		putchar(m);
	}
	for (k = 97; k <= 102; k++)
	{
		putchar(k);
	}
	putchar('\n');
	return (0);
}
