#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly-allocated space in memory
 *           containing a copy of the string given as parameter.
 * @str: The string to be copied.
 *
 * Return: If str == NULL or insufficient memory is available - NULL.
 *         Otherwise - a pointer to the duplicated string.
 */
char *_strdup(char *str)
{
	char *clone;
	int index, len = 0;

	if (str == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		len++;

	clone = malloc(sizeof(char) * (len + 1));

	if (clone == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		clone[index] = str[index];

	clone[len] = '\0';

	return (clone);
}
