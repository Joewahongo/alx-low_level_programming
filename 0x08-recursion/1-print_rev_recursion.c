#include "main.h"

/**
 * _print_rev_recursion - Print string in reverse
 * @s: String character argument
 *
 * Return: Always 0 Success
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar('\n');
	}
}
