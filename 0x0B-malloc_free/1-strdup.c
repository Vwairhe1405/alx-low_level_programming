#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a newly
 * allocated space in memory, containing a string copy
 * given as a parameter
 * @str: Strinh source
 *
 * Return: pointer to duplicate string, NULL, if
 * its insufficient
 */
char *_strdup(char *str)
{
	char *copy;

	int i, len =  0;

	if (str == NULL)
		return (NULL);
	while (str[len] != '\0')
		len++;
	copy = (char *)malloc((sizeof(char) * len) + 1);
		if (copy == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		copy[i] = str[i];
	copy[len] = '\0';
	return (copy);
}
