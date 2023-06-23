#include "main.h"

/**
 * print_numbers - Print numbers from 0 - 9
 *@c: char to be used
 *
 * Return: void
 */
void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
