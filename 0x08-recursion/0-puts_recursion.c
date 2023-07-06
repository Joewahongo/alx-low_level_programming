#include "main.h"

/**
 * _puts_recursion - prints string with new line
 * @s: input
 * Return: Always 0 Success
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar('\n');
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
