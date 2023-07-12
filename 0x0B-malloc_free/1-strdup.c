#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns a pointer to a new string
 * @str: string input
 *
 * Return: a pointer or NULL if the string is NULL
 */
char *_strdup(char *str)
{
	char *new_str;
	int i, len;

	if (str == NULL)
		return (NULL);

	len = strlen(str);

	new_str = malloc(sizeof(char) * (len + 1));

	if (new_str == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		new_str[i] = str[i];

	new_str[i] = '\0';
	return (new_str);
}
