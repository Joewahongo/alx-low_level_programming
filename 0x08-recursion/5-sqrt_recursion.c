#include "main.h"

/**
 * _sqrt_recursion - Returns natural square root of a number
 * @n: integer value
 *
 * Return: Integer value
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
int _sqrt(int n, int i)
{
	int _sqrt = i * i;

	if (_sqrt > n)
		return (-1);

	if (_sqrt == n)
		return (i);

	return (_sqrt(n, i + 1));
}
