#include "main.h"
#include <stdlib.h>

/**
 * create_array- function that creates an array of char
 * and initialize it with a specific char.
 * @size: The size of an array
 * @c: The initial value
 *
 * Return: A pointer to the array, otherwise NULL.
 */
char *create_array(unsigned int size, char c)
{
	char *array;

	unsigned int i;

	if (size == 0)
		return (NULL);

	array = (char *)malloc(sizeof(char) * size);
	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;
	return (array);
}
