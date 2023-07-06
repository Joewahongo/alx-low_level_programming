#include "main.h"

/**
 * _strlen_recursion - calculate the length of a string
 * @s: the string to count
 *
 * Return: integer value
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 Success
 */
int main(void)
{
	int length;

	length = _strlen_recursion("Corbin Coleman");
	printf("%d/n", length);
	return (0);
}
