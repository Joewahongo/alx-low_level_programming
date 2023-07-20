#include "function_pointers.h"

/**
 * int_index - returns the index if comparison = t = -1
 * @cmp: pointer to the function used to compare values
 * @size: number of elements in the array
 * @array: arrays used
 *
 * Return: index of first element for which cmp does not return 0 or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
