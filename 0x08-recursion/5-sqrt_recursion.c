#include "main.h"

int find_sqr(int num, int root);
int _sqrt_recursion(int n);

/**
 * find_sqr - find the natural square root of an input number
 * @num: number to find square root of
 * @root: root to be tested
 *
 * Return: If number is natural return square root
 * if number doesn't have natural root return -1
 */
int find_sqr(int num, int root)
{
	if (root * root == num)
	{
		return (root);
	}

	if (root == num / 2)
	{
		return (-1);
	}
	return (find_sqr(num, root + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: input
 *
 * Return: natural square root of number n
 */
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
	{
		return (-1);
	}

	if (n == 1)
	{
		return (1);
	}
	return (find_sqr(n, root));
}
